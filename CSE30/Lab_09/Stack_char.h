#ifndef _STACK_H 
#define _STACK_H

#include "LinkedList_char.h"
class Stack_char : public LinkedList_char {
    public:
        Stack_char(); 
        ~Stack_char(); 
        void push(char value); 
        char pop(); 
        char& top();
};
#endif




