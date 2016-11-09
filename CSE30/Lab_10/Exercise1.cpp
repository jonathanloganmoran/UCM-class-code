//Task 1: Implement class Queue inherited from LinkedList
#include <iostream>
#include "Queue.h"
using namespace std;


int main()
{
    Queue queue;
    try {
	queue.front();
    } catch (int error) {
	if (error == 0) {
	    //catch exception from dequeue()
	    cout << "Error from dequeue()" << endl;
	} else if (error == 1) {
	    //catch exception from front()
	    cout << "Error from front()" << endl;
	}
    }

    for (int i = 0; i < 10; i++) {
	cout << "Enqueueing value " << i << " to queue" << endl;
	queue.enqueue(i);
    }

    cout << "Front value of queue is " << queue.front() << endl;

    cout << "Queue values are: " << endl;
    queue.print();
    cout << endl << "Size of queue is: " << queue.size() << endl;
    cout << "Now, going to delete 5 values from the queue..." << endl;
    
    for (int i = 0; i < 5; i++) {
	cout << "Dequeueing value " << queue.dequeue() <<  " from queue..." << endl;
    }

    cout << "Front value of queue is now " << queue.front() << endl;
    cout << "Queue values after dequeuing are: " << endl;
    queue.print();
    cout << endl << "Size of queue after deletion is now " << queue.size() << endl;


return 0;
}
















