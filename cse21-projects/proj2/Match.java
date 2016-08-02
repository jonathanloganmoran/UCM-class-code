import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class Match {
	public static Student[] readStudents(String filename, int numStudents) { // returns an array of Students
		Student[] stArr = new Student[numStudents];
		try {
			Scanner input = new Scanner (new FileReader(filename));
			while (input.hasNextLine()) {
				
				input.useDelimiter("[\t-]");
				int currSt = 0;
				while (currSt < numStudents) {
					String name = input.next();
					char gender = input.next().charAt(0);
					
					int month = input.nextInt();
					int day = input.nextInt();
					int year = input.nextInt();
					Date dt = new Date(year, month, day);
					
					int quietTime = input.nextInt();
					int music = input.nextInt();
					int reading = input.nextInt();
					int chat = Integer.parseInt(input.nextLine().trim());
					Preference pref = new Preference(quietTime, music, reading, chat);
					
					stArr[currSt] = new Student(name, gender, dt, pref);
					System.out.println("wrote student " + (currSt+1));
					
					currSt++;
				}
				
			}
			input.close();
		} catch ( NoSuchElementException e){
			System.out.println(e); 
			
		} catch (FileNotFoundException e) {
			System.out.println(e);
		}
		return stArr;
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String file1 = "data/Students.txt";
		int f1StNum = 5;
		String file2 = "data/FullRoster.txt";
		int f2StNum = 25;
		String file = "";
		int studentNum = 0;
		System.out.println("input 0 for Students.txt or 1 for FullRoster.txt");
		int choice = input.nextInt();
		if (choice == 0) {
			file = file1;
			studentNum = f1StNum;
		}
		else if (choice == 1) {
			file = file2;
			studentNum = f2StNum;
		}
		else {
			System.out.println("Invalid input. \n restarting...");
			main(args);
		}
		
		Student[] stArr = readStudents(file, studentNum);
		
		for (int i = 0; i < studentNum; i++) {
			if (stArr[i].getMatched()) {
				continue;
			}
			int bestMatchScore = 0;
			int currentScore = 0;
			Student bestMatchStudent = null;
			for (int j = i+1; j < studentNum; j++) {
				if (!stArr[j].getMatched()) {
					currentScore = stArr[i].compare(stArr[j]);
				}
				if (currentScore > bestMatchScore) {
					bestMatchScore = currentScore;
					bestMatchStudent = stArr[j];
				}
			}
			if (bestMatchStudent != null) {
				bestMatchStudent.setMatched(stArr[i].setMatched(true));
				System.out.println(stArr[i].getName() + " matches with " + bestMatchStudent.getName() + " with score " + bestMatchScore);
			}
			else {
				System.out.println(stArr[i].getName() + " has no matches");
			}
		}
		input.close();
	}

}