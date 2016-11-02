#include <iostream>
#include <string>
#include "Stack_char.h"
using namespace std;

Stack_char::Stack_char():LinkedList_char() {} //constructor

Stack_char::~Stack_char() {} //destructor

void Stack_char::push(char value) {
    //call linked list insert function
    //going to treat "last" as "top"
    //call insertAtBack();
    insertAtBack(value);
}

char Stack_char::pop() {
    //treating "last" as top
    
    //copy the value to be removed
    char val_to_remove = last->val;

    //call LinkedList remove function
    removeFromBack();

    return val_to_remove;
}

char& Stack_char::top() {
    //return the top value
    return last->val;
}


