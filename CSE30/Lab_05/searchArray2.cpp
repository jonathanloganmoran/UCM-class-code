#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int binarySearchL(string* Arr, int size, string value) {
	int first = 0;
    int last = size-1;

    while (first <= last) {
        int middle = (first + last)/2;
        if (Arr[middle] < value) { // if middle is less than value
            //look to the right
            first = middle+1;
            middle = (first + last) / 2;
        } else if (Arr[middle] > value) { // if middle is greater than value
            //look to the left
            last = middle-1;
            middle = (first + last) / 2;
        } else if (Arr[middle] == value) {
            return middle;
        }
    }
    return -1;
}
int checkArraySort(string* array, int arr_size) {


    //Todo: check if increasing
    for (int i = 1; i < arr_size; i++) {
        string prev = array[i-1]; // get previous value
        string curr = array[i]; // get current indexed value
        if (prev > curr) { // if this is true, then array could be decreasing or unsorted
            break;
        }
        if (i == arr_size-1) { // if we are at last index
            // this is an increasing array because each value is greater than previous one
            return 1; // increasing array
        }
    }


    //Todo: check if decreasing
    for (int i = 1; i < arr_size; i++) {
        string prev = array[i-1]; // get previous value
        string curr = array[i]; // get current indexed value
        if (prev < curr) { // if this is true, then array could be increasing or unsorted
            break;
        }
        if (i == arr_size-1) { // if we are at last index
            // this is an decreasing array because each value is less than previous one
            return -1; // decreasing array
        }
    }

    //if we get to here, then the array is not sorted
    return 0;
}


int main()
{
    ifstream file_in; 
    file_in.open("words_in.txt");
    string line;
    int count = 0; // this is for finding the number of lines in a text file.
    if ( file_in.is_open() ) {
        while (!file_in.eof()) {
            getline(file_in, line);
            count++;
        }
    }
    file_in.close();

    string *arr = new string[count];

    file_in.open("words_in.txt");
    if ( file_in.is_open() ) {
        while ( !file_in.eof() ) {
            for (int i = 0; i < count; i++) {
            getline(file_in, arr[i]);
            }
        }
    }

    int result = checkArraySort(arr, count);

    if (result != 1) {
        cout << "The array is not sorted in ascending order!" << endl;
        cout << " result is " << result << endl;
        return 0;
    }
    
    cout << "Input a search value: " << endl;
    string searchVal;
    cin >> searchVal;

    int idxFound = binarySearchL(arr, count, searchVal);

    if (idxFound == -1) {
    	cout << "Value of " << "\"" << searchVal << "\" not found in the array." << endl;
    	return 0;
    }

    cout << "Found \"" << searchVal << "\" at index " << idxFound << " of the array." << endl;

return 0;

}


