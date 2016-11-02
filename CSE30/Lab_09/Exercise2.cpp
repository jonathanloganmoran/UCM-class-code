#include <iostream>
#include "Stack_char.h"
using namespace std;


int main()
{
    Stack_char s2;
    
    cout << "isEmpty():\t\t\t" << s2.isEmpty() << endl;

    s2.push('A');
    cout << "push(A)  Stack contents:\t";
    s2.print();

    s2.push('Y');
    cout << "push(Y)  Stack contents:\t";
    s2.print();

    cout << "size(): " << s2.size() << " Stack contents:\t";
    s2.print();

    cout << "pop(): " << s2.pop() << " Stack contents:\t";
    s2.print();
 
    cout << "isEmpty():\t\t\t" << s2.isEmpty() << endl;

    s2.push('D');
    cout << "push(D)  Stack contents:\t";
    s2.print();

    cout << "top():  " << s2.top();
    cout << " Stack contents:\t";
    s2.print();

    s2.push('T');
    cout << "push(T)  Stack contents:\t";
    s2.print();

    cout << "pop(): " << s2.pop() << " Stack contents:\t";
    s2.print();

return 0;
}
