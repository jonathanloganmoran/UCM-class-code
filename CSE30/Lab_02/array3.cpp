#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of a 2D array: " << endl;
    int size;

    cin >> size;

    int twoD[size][size];

    int negCount = 0;
    for (int i = 0; i < size; i++) {
	cout << "Enter the values in the array for row " << i+1 << ": ";
	
	for (int j = 0; j < size; j++) {
	    int num;
	    cin >> num;
	    twoD[i][j] = num;
	    if (num < 0) negCount++;
	}
    	cout << endl;
    }
    if (negCount == 0) {
        cout << "All values are non-negative!" << endl;
	return 0;
    }
    cout << "There are " << negCount << " negative values!" << endl;
    return 0;
}
