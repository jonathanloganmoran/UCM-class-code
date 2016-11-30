#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

Stack::Stack():LinkedList() {} //constructor

Stack::~Stack() {} //destructor

void Stack::push(int value) {
    //call linked list insert function
    //going to treat "last" as "top"
    //call insertAtBack();
    insertAtBack(value);
}

int Stack::pop() {
    //treating "last" as top
    
    //copy the value to be removed
    int val_to_remove = last->val;

    //call LinkedList remove function
    removeFromBack();

    return val_to_remove;
}

int& Stack::top() {
    //return the top value
    return last->val;
}


