#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Time { // by default, members are public
    int hour;
    int minutes;
    int seconds;
};

struct Course {
	string name;
	int credits;
	bool majorRequirement;
	double avgGrade;
	string days;
	Time startTime;
	Time endTime;
};

int main() {
	ifstream file('in.txt');
	string line;
	getline(file, line);
	int num_courses = atoi(line);

    int count = 0; // this is for finding the number of lines in a text file.
    if ( file.is_open() ) {
    	while (!file_in.eof()) {
    	    getline(file_in, line);
    	    count++;
    	}
    }
    file_in.close();

	Course my_courses[num_courses];
	for (int i = 0; i < num_courses; i++) {
		//read courses info
		if (file.is_open()) {
			while ( !file_in.eof() ) {
    	    for (int i = 0; i < count / 2; i++) {
    			getline(file_in, arr[i]);
    	    }
    	}
		}
	}
}