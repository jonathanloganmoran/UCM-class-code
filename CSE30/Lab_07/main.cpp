#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Time.h"
using namespace std;

void print24Hour(Time& time) {
	//print time in HH:MM:SS format
  cout << setfill('0') << setw(2) << time.getHour() << ":" << setfill('0') << setw(2) << time.getMinutes() <<":" << setfill('0') << setw(2) << time.getSeconds() << endl;
  return;
}

bool getTimeFromUser(Time& time) {
    string inputTime;
    cin >> inputTime;

    int strLength = inputTime.length();

    for (int i = 0; i < strLength; i++) {
        if (isalpha(inputTime[i])) {
            cout << "Found alphabet letter" << endl;
            return 0;
        }
    }

    //get hour of string
    int first_colon = inputTime.find(':');
    string hours = inputTime.substr(0, first_colon);

    //get minutes of string
    int second_colon = inputTime.find_last_of(':');
    string minutes = inputTime.substr(first_colon + 1, second_colon);

    //get seconds of string
    string seconds = inputTime.substr(second_colon + 1);

    int hour = atoi(hours.c_str()); //convert hour string into integer
    int minute = atoi(minutes.c_str());
    int second = atoi(seconds.c_str());

    if (!(hour < 24 && hour > -1) || !(minute > -1 && minute < 60) || !(second > -1 && second < 60)) {
        return 0;
    }

    time.setHour(hour);
    time.setMinutes(minute);
    time.setSeconds(second);

    return 1;
}


int main()
{
    Time start_time;
    Time end_time;

    //ask user for start time
    cout << "Enter the start time for the lecture (format is HH:MM:SS) : " << endl;    


    //check if user input is valid
    if (!getTimeFromUser(start_time)) {
      //if time is not valid, display error message, exit program
    	cout << "Invalid start time input" << endl;
    	return 0;
    }

   //ask user for end time
   cout << "Enter the end time for the lecture (format is HH:MM:SS) : " << endl;

   //check if user input is valid
   if (!getTimeFromUser(end_time)) {
      //if time is not valid, display error message, exit program
      cout << "Invalid end time input" << endl;
      return 0;
   }

   cout << "The lecture starts at ";
   print24Hour(start_time);
   cout << " and ends at ";
   print24Hour(end_time);

return 0;
}
