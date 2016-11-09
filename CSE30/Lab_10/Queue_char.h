#ifndef _Queue_H
#define _Queue_H
#include "LinkedList_char.h"

class Queue_char : public LinkedList_char {
    public:
	Queue_char();
	~Queue_char();
	void enqueue(char value); //inserts a new element (value) at the back of the Queue
	char dequeue(); //removes the first element of the queue
	char& front(); //returns a reference to the front element of the Queue
};
#endif
