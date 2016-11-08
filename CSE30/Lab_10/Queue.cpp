//NOTE:  enqueue(x), or push() is insertion for a queue (inserted at rear end)
//dequeue(), or pop() is a removal from the queue (removed from front end)
#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue():LinkedList() {}

Queue::~Queue() {}

void Queue::enqueue(int value) {
    //call linkedlist function
    insertAtBack(value);
    return;
}

int Queue::dequeue() {
    //handle exception
    if (isEmpty()) {
	throw 0;
    }

    int val_to_remove = first->val;
 
    //call linkedlist function
    removeFromFront();
    
    return val_to_remove;
}


int& Queue::front() {
    
    //handle exception



    //call linkedlist function


    return 0;

}











