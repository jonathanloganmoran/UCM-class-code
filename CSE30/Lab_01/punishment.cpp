#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cout << "Enter the number of lines for the punishment: " << endl;
    cin >> N;
    if (cin.fail() || N < 0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        cout << "I will always use object oriented programming." << endl;
    }
    return 0;
}
