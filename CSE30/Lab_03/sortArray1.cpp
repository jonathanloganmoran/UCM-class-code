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

    for (int i = arrSize-1; i >= 0; i--) { // decrement i starting from n-1 to 1
	int idxMax = 0; // temp max index
	for (int j = 0; j <= i; j++) { // increment j starting from 1 to i
	    int currVal = array[j]; // get current value
	    if (currVal > array[idxMax]) { // if current value is bigger than max
		idxMax = j; //update index of temp max
	    }
	}

	if (idxMax != i) { // if they are not the same
	    int temp1 = array[i];
	    int temp2 = array[idxMax];
	    array[idxMax] = temp1; // swap the values
	    array[i] = temp2;
	}
    }

    cout << "This is the sorted array in ascending order: ";
    for (int i = 0; i < arrSize; i++) {
	cout << array[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array" << endl;

    return 0;
}
