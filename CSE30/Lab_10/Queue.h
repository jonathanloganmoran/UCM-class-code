#ifndef _QUEUE_H
#define _QUEUE_H

#include "LinkedList.h"

class Queue : public LinkedList {
    public:
	Queue();
	~Queue();
	void enqueue(int value); //inserts a new element (value) at the back of the Queue
	int dequeue(); //removes the first element of the queue
	int& front(); //returns a reference to the front element of the Queue
};
#endif
