#include <iostream>
using namespace std;
int main()
{
    int arrSize;
    cout << "Enter the size of the array" << endl;
    cin >> arrSize; // asking input for array size

    if (arrSize < 1) { // if input is negative integer, then error
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        return 0;
    }
    int array [arrSize];
    cout << "Enter the numbers in the array, separated by a space, and press enter: " << endl;
    for (int i = 0; i < arrSize; i++) {
        cin >> array[i]; // user input assigned to current index space
    }
    for (int i = 1; i < arrSize; i++) {
        int prev = array[i-1]; // get previous value
        int curr = array[i]; // get current indexed value
    	if (prev > curr) { // check if previous is greater than current value
    	    cout << "This is NOT an increasing array!" << endl;
    	    break;
    	}
    	if (i == arrSize-1) { // if we are at last index
    	    // this is an increasing array because each value is greater than previous one
    	    cout << "This IS an increasing array!" << endl;
    	}
    }

    return 0;
}
