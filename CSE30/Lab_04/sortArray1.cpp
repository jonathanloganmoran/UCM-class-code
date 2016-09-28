#include <iostream>
using namespace std;

void sortArr(int A[], int array_size, bool ascending) {
    if (ascending == 0) {
        for (int i = array_size-1; i >= 0; i--) { // decrement i starting from n-1 to 1
        int idxMax = 0; // temp max index
            for (int j = 0; j <= i; j++) { // increment j starting from 1 to i
                int currVal = A[j]; // get current value
                if (currVal > A[idxMax]) { // if current value is bigger than max
                    idxMax = j; //update index of temp max
                }
            }
            
            if (idxMax != i) { // if they are not the same
                int temp1 = A[i];
                int temp2 = A[idxMax];
                A[idxMax] = temp1; // swap the values
                A[i] = temp2;
            }
        }

        cout << "This is the sorted array in ascending order: ";
        for (int i = 0; i < array_size; i++) {
        cout << A[i] << " ";
        }
        cout << endl;
        cout << "The algorithm selected the maximum for the traverse of the array" << endl;
    }
    else {
        for (int i = array_size-1; i >= 0; i--) { // decrement i starting from n-1 to 1
        int idxMin = 0; // temp max index
            for (int j = 0; j <= i; j++) { // increment j starting from 1 to i
                int currVal = A[j]; // get current value
                if (currVal < A[idxMin]) { // if current value is less than min
                    idxMin = j; //update index of temp min
                }
            }

            if (idxMin != i) { // if they are not the same
                int temp1 = A[i];
                int temp2 = A[idxMin];
                A[idxMin] = temp1; // swap the values
                A[i] = temp2;
            }
        }

        cout << "This is the sorted array in descending order: ";
        for (int i = 0; i < array_size; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
        cout << "The algorithm selected the minumum for the traverse of the array" << endl;
    }
}
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
    cout << "Sort in ascending (0) or descending (1) order?" << endl;
    bool ascending;
    cin >> ascending;
    sortArr(array, arrSize, ascending);
    
    return 0;
}
