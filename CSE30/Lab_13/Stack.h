#ifndef _STACK_H 
#define _STACK_H

#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

template<class T>
class Stack : public LinkedList<T> {
    public:
        Stack(); 
        ~Stack(); 
        void push(T value); 
        T pop();
        T& top();
};


template<class T>
Stack<T>::Stack() {} //constructor

template<class T>
Stack<T>::~Stack() {} //destructor

template<class T>
void Stack<T>::push(T value) {
    //call linked list insert function
    //going to treat "last" as "top"
    //call insertAtBack();
    LinkedList<T>::insertAtBack(value);
}

template<class T>
T Stack<T>::pop() {
    //treating "last" as top
    
    //copy the value to be removed
    T val_to_remove = LinkedList<T>::last->val;

    //call LinkedList remove function
    LinkedList<T>::removeFromBack();

    return val_to_remove;
}


template<class T>
T& Stack<T>::top() {
    //return the top value
    return LinkedList<T>::last->val;
}



#endif