#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    first = NULL;
    last = NULL;
}

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::insertAtBack(int valueToInsert) {
    Node* node = new Node();
    node->val = valueToInsert;
    node->next = NULL; //Null because this is the last node of the list
    //TODO
    
}

bool LinkedList::removeFromBack() {
	//case 1
    if (first == NULL) { //no node
	return false;
    }
	//case 2
    if (first == last) { //only one node
	delete [] first; //why do we use 'delete [] first;' instead of 'delete first'?  
			 //Could you put in catcourses comments? Thank you
	//first and last now point to null
	first = NULL; 
	last = NULL;
	return true;
    } 
    else { // case 3, general case
	//1. Find the second last node
	Node *current = first;
	Node *secToLast;
	
	while (current->next != NULL) {
	    if (current->next == last) { // if we are at the second to last element
		secToLast = current; // make secToLast pointer point to current
		break;
	    }
	    current = current->next;
	}

	//2. Delete Last
	delete last;
	

	//3. Last points to the second last node
	last = secToLast;

	//4. Last->next points to NULL	
	last->next = NULL;
    }


}

void LinkedList::print() {
    // 1 -> 2 -> 3 -> 4 -> 5
    // print: 1,2,3,4,5
    Node *curr = first;
    while (curr->next != NULL) {
	cout << curr->val << ",";
	curr = curr->next;
    }
}

bool LinkedList::isEmpty() {
    return first == NULL;
}

int LinkedList::size() {
    if (isEmpty()) {
	return 0;
    }
    int nodeCount = 0;
    Node *current = first;
    while (current->next != NULL) {
	nodeCount++;
        current = current->next;
    }
    return nodeCount;
}

void LinkedList::clear() {
    if (first == NULL) { // no node
	return;
    }
    if (first == last) { // only one node
	//TODO
	delete first;
	first = NULL;
	last = NULL;
    } else {

	//1. Second points to First->next
	Node *second = first->next;
	//2. Delete first
	delete first;
	//3. first points to Second	
	first = second;
	//4. Repeat until Second is NULL
	while (second != NULL) {
	    second = first->next;
	    delete first;
	    first = second;
	}
    }
}


//For exercise 2:

void LinkedList::insertAtFront(int valueToInsert) {



}

bool LinkedList::removeFromFront() {





}



