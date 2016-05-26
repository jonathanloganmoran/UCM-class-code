/*
 * @author Miguel Hernandez
 * 
 * Calculates your college GPA based on input of grade points, units,
 * and number of classes.
 * This was project 1 for my CSE 21 class.
 */



import java.util.Scanner;
public class GPA { //go down to the main method to see the execution steps
	static String[] possibleGrades = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-","D+", "D", "F"}; 
	static String[] gradeScale = {"4.0", "3.7", "3.3", "3.0", "2.7", "2.3", "2.0", "1.7", "1.3", "1.0", "0.0"};//these string arrays are for displaying purposes
	public static boolean courseNumInputChecker(int num) {
		if ((num <= 20) && (num > 0)) {
			return true;
		}
		else {
			System.out.println("Can't have more than 20 courses or invalid input.");
		}
		return false;
	}
	public static void displayRefScale() {
		//The sole purpose of this method is to display the reference scale just in case the user forgets the grade point scale conversion.
		//It will not be used in GPATest.
		System.out.println("Here is the gpa reference scale.  Input your grades with the corresponding units.");
		System.out.println("Grade \tScale");
		for (int i = 0; i < 11; i++) {
			System.out.println(possibleGrades[i] + "\t" + gradeScale[i]);
		}
	}
	public static boolean greaterThanTwelve(double totalUnits) { // checks if total units adds up to twelve.
		if (totalUnits >= 12) {
			return true;
		}
		System.out.println("Total units must be at least 12 in order to calculate GPA.");
		
		return false;
	}
	public static void displayTransNoGrades(double units[], double points[]) { //no test, only for displaying purposes
		System.out.println("Units \tGrades");
		for (int i = 0; i < units.length; i++) {
			System.out.println(units[i] + "\t" + points[i]);
		}
	}
	public static String[] convertPointsToLetters(double gradePoints[]) { //returns a string array converted based on scale and units from the array gradePoints
		String letterGrades[] = new String[gradePoints.length];
		for (int i = 0; i < gradePoints.length; i++) {
			if (gradePoints[i] >= 4.0) {
				letterGrades[i] = "A"; // based on the reference scale
			}
			else if (gradePoints[i] >= 3.7) {
				letterGrades[i] = "A-";
			}
			else if (gradePoints[i] >= 3.3) {
				letterGrades[i] = "B+";
			}
			else if (gradePoints[i] >= 3.0) {
				letterGrades[i] = "B";
			}
			else if (gradePoints[i] >= 2.7) {
				letterGrades[i] = "B-";
			}
			else if (gradePoints[i] >= 2.3) {
				letterGrades[i] = "C+";
			}
			else if (gradePoints[i] >= 2.0) {
				letterGrades[i] = "C";
			}
			else if (gradePoints[i] >= 1.7) {
				letterGrades[i] = "C-";
			}
			else if (gradePoints[i] >= 1.3) {
				letterGrades[i] = "D+";
			}
			else if (gradePoints[i] >= 1.0) {
				letterGrades[i] = "D";
			}
			else if (gradePoints[i] >= 0.7) {
				letterGrades[i] = "D-";
			}
			else if (gradePoints[i] >= 0.0) {
				letterGrades[i] = "F";
			}
		}
		return letterGrades;
	}
	public static void displayTransLetters(double units[], String letters[]) { //no test, only for displaying purposes
		System.out.println("Units \tGrades");
		for (int i = 0; i < units.length; i++) {
			System.out.println(units[i] + "\t" + letters[i]);
		}
	}
	public static double pointSum(double points[], double units[]) { //adds up the numerator for calculating the GPA
		double sum = 0;
		for (int i = 0; i < points.length; i++) {
			sum += (points[i] * units[i]);
		}
		return sum;
	}
	public static double unitSum(double units[], int numClasses) { // adds up the units based on how many classes the user chose
		double sum = 0;
		for (int i = 0; i < numClasses; i++) {
			sum += units[i];
		}
		return sum;
	}
	public static double calcGPA(double numerator, double denominator) { //calculates the GPA by dividing numerator by denominator.
		//numerator or denominator cannot be less than 0
		if (numerator < 0 || denominator < 0) {
			return -1.0;
		}
		double gpa = numerator / denominator;
		return gpa;
	}
	
	/*
	 * main()
	 * @param args
	 */
	public static void main(String[] args) { //main method
		Scanner input = new Scanner(System.in);
		double totalUnits;
		System.out.println("How many classes are you taking?  Type in a number from 1-20");
		int numCourses = input.nextInt();
		if (!courseNumInputChecker(numCourses)) {
			System.out.println("Resetting...");
			System.out.println();
			main(args);
		}
		double[] gradePoints = new double[numCourses];
		double[] numUnits = new double[numCourses];
		displayRefScale();
		System.out.println("You are taking " + numCourses + " courses.");
		System.out.println("Please enter the grades below. Type the numbers in the order of unit # (ex: 4), scale #(ex: 4.0), unit #(ex: 2), scale #(ex: 3.7), etc. without the commas.");
		System.out.println("Do this until you have input for all classes.");
		System.out.println("Refer to the scale table above.");
		for (int i = 0; i < numCourses; i++) {
			numUnits[i] = input.nextDouble();
			gradePoints[i] = input.nextDouble();
		}
		totalUnits = unitSum(numUnits, numCourses);
		if (!greaterThanTwelve(totalUnits)) {
			System.out.println("Resetting...");
			System.out.println();
			main(args);
		}
		String[] letterGrades = convertPointsToLetters(gradePoints);
		System.out.println();
		System.out.println("Do you want to see your transcript? (y or n)");
		String choice = input.next();
		if (choice.charAt(0) == 'y' || choice.charAt(0) == 'Y') {
			System.out.println("Do you want to see Letter Grades? (y or n)");
			choice = input.next();
			if (choice.charAt(0) == 'y' || choice.charAt(0) == 'Y') {
				displayTransLetters(numUnits, letterGrades);
			}
			else {
				displayTransNoGrades(numUnits, gradePoints);
			}
		}
		else if (choice.charAt(0) == 'n' || choice.charAt(0) == 'N') {
		System.out.println();
		System.out.println("Your GPA is " + (double)(int)((calcGPA(pointSum(gradePoints, numUnits), totalUnits)*100))/100);
		input.close();
		}
		else {
			System.out.println("Invalid input, resetting...");
			main(args);
		}
	}
}
