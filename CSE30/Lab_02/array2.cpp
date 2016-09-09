#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter the string to reverse: ";
    string str; //string we will use to store input

    cin >> str; //store input to str

    int strLength = str.length(); 

    cout << "The reverse of the string is: " << endl;

    for (int i = strLength-1; i >= 0 ; i--) {
	cout << str[i]; //print characters starting from last char of input string
    }
    cout << endl;
    return 0;
}
