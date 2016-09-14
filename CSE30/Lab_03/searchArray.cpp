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
    
    cout << "Enter a number to search for in the array: " << endl;
    int key;
    cin >> key;

    int count = 1;
    for (int i = 0; i < arrSize; i++) {
	int curr = array[i]; // get current index value
	if (curr == key) { // compare key to current index value
	    cout << "Found value " << key << " at index " << i << ", which took " << count << " check(s)" << endl;
	    if (count == 1) { // best case scenario
		cout << "We ran into the best case scenario!" << endl;
	    } else if (count == arrSize) { // worst case scenario
		cout << "We ran into the worst case scenario!" << endl;
	    }
	    return 0;
	}
	count++;
    }
    cout << "The value" << key << " was not found in the array!" << endl;






    return 0;
}
