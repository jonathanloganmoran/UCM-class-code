#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N = 0;
    cout << "Enter the number of lines for the punishment: " << endl;
    cin >> N;
    if (cin.fail() || N < 0) { // if cin is not an integer or if cin is a negative number
        cout << "Invalid input" << endl;
        return 0;
    }

    string typo = "I will always use object oriented programing.";
    int lineIndex = 0;
    cout << "Enter the line for which we want to make a typo: " << endl;
    cin >> lineIndex;
    if (cin.fail() || lineIndex < 0) { // same error check as above, except now for 2nd input
        cout << "Invalid input for typo line" << endl;
        return 0;
    }
    
    for (int i = 0; i < N; i++) {
        if (i == lineIndex-1) {
            cout << typo << endl;
        }
        else {
            cout << "I will always use object oriented programming." << endl;
        }
    }
    return 0;
}
