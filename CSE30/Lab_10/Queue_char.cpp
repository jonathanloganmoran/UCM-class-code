//NOTE:  enqueue(x), or push() is insertion for a queue (inserted at rear end)
//dequeue(), or pop() is a removal from the queue (removed from front end)
#include <iostream>
#include "Queue_char.h"
using namespace std;

Queue_char::Queue_char():LinkedList_char() {}

Queue_char::~Queue_char() {}

void Queue_char::enqueue(char value) {
    //call linkedlist function
    insertAtBack(value);
    return;
}

char Queue_char::dequeue() {
    //handle exception
    if (isEmpty()) {
	throw 0;
    }

    char val_to_remove = first->val;
 
    //call linkedlist function
    removeFromFront();
    
    return val_to_remove;
}


char& Queue_char::front() {
    
    //handle exception
    if (isEmpty()) {
	throw 1;
    }

    //call linkedlist function
    return first->val;
}

