//Task 2:  Change the node value from int to char in LinkedList and Queue
#include <iostream>
#include "Queue_char.h"
using namespace std;

int main()
{

    Queue_char queue;

    cout << "dequeue():\t\t\t" << endl;

    try {
	queue.dequeue();
    } catch (int error) {
	if (error == 0) {
	    cout << "Error from dequeue()" << endl;
	} else if (error == 1) {
	    cout << "Error from front()" << endl;
	}
    }

    queue.enqueue('D');
    cout << "enqueue(D)   :\t";
    queue.print();

    queue.enqueue('A');
    cout << "enqueue(A)   :\t";
    queue.print();

    cout << "dequeue(): " << queue.dequeue() << " :\t";
    queue.print();
 
    cout << "size():   " << queue.size() << "  :\t";
    queue.print();

    queue.enqueue('D');
    cout << "enqueue(D)   :\t";
    queue.print();

    cout << "isEmpty():  " << queue.isEmpty() << "\t";
    queue.print();

    cout << "front():  " << queue.front();
    cout << "  :\t";
    queue.print();

    queue.enqueue('T');
    cout << "enqueue(T)   :\t";
    queue.print();

    cout << "front():  " << queue.front();
    cout << "  :\t";
    queue.print();


return 0;
}
















