#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

struct Time {//structure needed to create times

	int hour;
	int minutes;
	int seconds;

};

struct Course {//structure used to hold course data
	string name;
	int credits;
	bool majorRequirement;
	double avgGrade;
	string days;
	Time startTime;
	Time endTime;
};

void getCourseData(Course &course, int counter) {
	ifstream file_input;
	ofstream file_output;
	string line, name, credits, req, average, days;//initial string inputs from file
	string startTime, endTime;
	string startTimeHour, startTimeMinute, startTimeSecond;//seperate string inputs for the times to convert to int
	string endTimeHour, endTimeMinute, endTimeSecond;
	file_input.open("in.txt");
	if (counter == 0) {//checks to see if first run, if so, skips first line
		getline(file_input, line);
		counter++;
	}
	if (counter >= 1) {//checks to see if this is at least the second run, and skips the first 8 lines if so
		for (int j = 0; j < 8; j++) {
			getline(file_input, line);
		}
	}
	if (counter > 1) {//for every run after that, skips the next seven lines
		for (int k = 0; k < (counter-1)*7; k++) {
			getline(file_input, line);
		}
	}
	getline(file_input, name);
	course.name = name;//fetches the name and sets it
	getline(file_input, credits);
	course.credits = atoi(credits.c_str()); //fetches credits and puts as int
	getline(file_input, req);
	if (req == "1") //checks string for 1 = true, 0 = false, and sets accordingly
		course.majorRequirement = true;
	else
		course.majorRequirement = false;
	getline(file_input, average);
	course.avgGrade = atof(average.c_str()); //sets average to float
	getline(file_input, days);
	course.days = days;//sets days as same string
	getline(file_input, startTime);
	size_t position1 = startTime.find(":");
	startTimeHour = startTime.substr(0, 2);
	startTimeMinute = startTime.substr(position1 + 1, 2);				//the whole block here mimics the previous getTime, but it deemed simpler to just include in this method.
	startTimeSecond = startTime.substr(startTime.find(":", 3) + 1);		//it still seperates the strings into integers.
	course.startTime.hour = atoi(startTimeHour.c_str());
	course.startTime.minutes = atoi(startTimeMinute.c_str());
	course.startTime.seconds = atoi(startTimeSecond.c_str());
	getline(file_input, endTime);
	size_t position2 = endTime.find(":");
	endTimeHour = endTime.substr(0, 2);
	endTimeMinute = endTime.substr(position2 + 1, 2);
	endTimeSecond = endTime.substr(endTime.find(":", 3) + 1);
	course.endTime.hour = atoi(endTimeHour.c_str());
	course.endTime.minutes = atoi(endTimeMinute.c_str());
	course.endTime.seconds = atoi(endTimeSecond.c_str());
}

int main() {
	Course course;
	Course * courseArr;//you need a dynamic array, since the number of courses may vary
	ifstream file_input;
	ofstream file_output;
	string num;
	int courseNumInt;
	cout << "-------------------\n";//starting output
	cout << "SCHEDULE OF STUDENT\n";
	cout << "-------------------\n";
	file_input.open("in.txt");//open file
	getline(file_input, num);//get number of courses for integer
	courseNumInt = atoi(num.c_str());
	file_input.close();
	courseArr = new Course[courseNumInt];//define array length to that integer
	for (int i = 0; i < courseNumInt; i++) {//loops for each course
		getCourseData(courseArr[i], i);//calls method to define each course, with i as the counter
		cout << "COURSE " << i + 1 << ": " << courseArr[i].name << "\n";
		if (courseArr[i].majorRequirement == true)					//the rest just prints out the output as shown in the lab
			cout << "Note: this course is a major requirement!\n";
		else
			cout << "Note: this course is not a major requirement...\n";
		cout << "Number of Credits: " << courseArr[i].credits << "\n";
		cout << "Days of Lectures: " << courseArr[i].days << "\n";
		cout << "Lecture Time: ";
		if (courseArr[i].startTime.hour == 12)				//time gets a little tricky, but each if checks to convert military time to am/pm, along with filling 0's if necessary
			cout << courseArr[i].startTime.hour << ":" << setfill('0') << setw(2) << courseArr[i].startTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].startTime.seconds << "pm - ";
		else if (courseArr[i].startTime.hour > 12 && courseArr[i].startTime.hour <= 23)
			cout << courseArr[i].startTime.hour - 12 << ":" << setfill('0') << setw(2) << courseArr[i].startTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].startTime.seconds << "pm - ";
		else
			cout << courseArr[i].startTime.hour << ":" << setfill('0') << setw(2) << courseArr[i].startTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].startTime.seconds << "am - ";
		if (courseArr[i].endTime.hour == 12)
			cout << courseArr[i].endTime.hour << ":" << setfill('0') << setw(2) << courseArr[i].endTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].endTime.seconds << "pm\n";
		else if (courseArr[i].endTime.hour > 12 && courseArr[i].endTime.hour <= 23)
			cout << courseArr[i].endTime.hour - 12 << ":" << setfill('0') << setw(2) << courseArr[i].endTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].endTime.seconds << "pm\n";
		else
			cout << courseArr[i].endTime.hour << ":" << setfill('0') << setw(2) << courseArr[i].endTime.minutes << ":" << setfill('0') << setw(2) << courseArr[i].endTime.seconds << "am\n";
		cout << "Stat: on average, students get " << courseArr[i].avgGrade << "% in this course.\n"; //print stats
		cout << "-------------------\n"; //repeat if necessary
	}

	file_input.close();//close file

	return 0;//done
}
























// #include <cstdlib>
// #include <iostream>
// #include <fstream>
// #include <iomanip>
// using namespace std;
//
// struct Time {
//   int hour;
//   int minute;
//   int second;
// };
//
// struct Course {
//   string name;
//   int credits;
//   bool majorRequirement;
//   double avgGrade;
//   string days;
//   Time startTime;
//   Time endtime;
// };
//
//
//   bool getInfoFromUser(Course &info) {
//
//
//
//
// }
//
//
//
//
// int main() {
//   int count = 0;  //the code in the main just reads the file and gets the size
//   int courseNum = 0;
//   Course startTime;
//   Course endTime;
//   Course creditsNum;
//
//
//   ifstream myfile;
//   myfile.open("in.txt");
//   string line;
//   if (myfile.is_open()) {
//     while (!myfile.eof()) {
//       getline(myfile,line);
//       count++;                   //gets the size
//     }
//   }
//   myfile.close();
//
//   string* arr = new string[count];
//
//   myfile.open("in.txt");
//   int  i=0;
//   if (myfile.is_open()) {
//     while(!myfile.eof()) {
//       getline(myfile,line);
//       arr[i++]=line;         //fills an array with the values of the txt file
//     }
//   }
//
//   cout << "-------------------" << endl;
//   cout << "SCHEDULE OF STUDENT" << endl;
//   cout << "-------------------" << endl;
//
//   courseNum = atoi(arr[0].c_str()) + 1;
//
//   for(int i = 0; i < courseNum - 1; i++) {
//     if ()
//     cout << "COURSE " << i + 1 << ":" << arr[] << endl;
//     for(int j = 1; j < count; j++) {
//       cout<< "Note: " << arr[ (i+1) * 7]
//     }
//
//   }
//
//
//
//
//
//
// }
