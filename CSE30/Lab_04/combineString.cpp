#include <iostream>
#include <string>
using namespace std;

string combineStr(string str, int num)
{
    string output = "";
    for (int i = 0; i < num; i++) {
	output += str; // concatenate string num amount of times
    }
    return output;
}

int main()
{
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;

    int numTimes;
    cout << endl << "Enter a number of times: ";
    cin >> numTimes;

    string answer = combineStr(inputStr, numTimes);// call to combineStr function
    cout << endl << "The resulting string is: " << answer << endl;
    
    return 0;
}
