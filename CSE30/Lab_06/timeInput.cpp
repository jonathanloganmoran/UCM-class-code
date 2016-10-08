#include <iostream>
#include <string>

struct Time { // by default, members are public
    int hour;
    int minutes;
    int seconds;
};




//going to comment pseudocode that I wrote to follow

int main()
{
    Time start_time;
    start_time.hour = 12;
    start_time.minutes = 30;
    start_time.seconds = 5;

    cout << "Enter the start time for the lecture (format is HH:MM:SS) : " << endl;

   //user inputs time here



return 0;
}
