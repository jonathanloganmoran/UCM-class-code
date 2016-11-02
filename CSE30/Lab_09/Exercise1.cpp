#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
    Stack s1;
    
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(3);
    cout << "size() = " << s1.size() << endl;
    cout << "top() = " << s1.top() << endl;
    cout << "pop() = " << s1.pop() << endl;
    s1.print();

    cout << endl;


    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(6);
    cout << "size() = " << s1.size() << endl;
    cout << "top() = " << s1.top() << endl;
    cout << "pop() = " << s1.pop() << endl;
    s1.print();

    cout << endl;


    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.push(10);
    cout << "size() = " << s1.size() << endl;
    cout << "top() = " << s1.top() << endl;
    cout << "pop() = " << s1.pop() << endl;
    s1.print();

    cout << endl;

return 0;
}
