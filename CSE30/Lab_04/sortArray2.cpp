#include <iostream>
using namespace std;

void sortArr(int A[], int array_size, bool ascending) {
    if (ascending == 0) {
        for (int i = 1; i <= array_size-1; i++) {
            int saved = A[i];
            int j = i;
            while (j > 0 && A[j-1] > saved) { // while j is positive and previous is greater than saved
                A[j] = A[j-1]; // current j becomes previous
                j--;
            }
            A[j] = saved; 
        }
        cout << "This is the sorted array in ascending order using insertion sort: " << endl;
        for (int i = 0; i < array_size; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i = 1; i <= array_size-1; i++) {
            int saved = A[i];
            int j = i;
            while (j > 0 && A[j-1] < saved) { // while j is positive and previous is less than saved
                A[j] = A[j-1]; // current j becomes previous
                j--;
            }
            A[j] = saved; 
        }
        cout << "This is the sorted array in descending order using insertion sort: " << endl;
        for (int i = 0; i < array_size; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
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
