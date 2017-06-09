//
//  IntStack.cpp
//  Sci_Fi
//


#include <stdio.h>
#include <iostream>
#include "IntStack.h"
#include <string>


using namespace std;

template <class T>
IntStack<T>::~IntStack()
{

    StackNode *nodePtr, *nextNode;
    
    nodePtr = top;
    
    while (nodePtr !=nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    
    }
    
}


template <class T>
void IntStack<T>::push(T item)
{
    StackNode *newNode = nullptr;
    
    newNode = new StackNode;
    newNode ->value = item;
    
    
    if (isEmpty())
    {
        top = newNode;
        newNode ->next = nullptr;
    }
    
    
    else
    {
    
        newNode ->next = top;
        top = newNode;
    }
}


template <class T>
void IntStack<T>::pop(T &item)

{
    StackNode *temp = nullptr;
    
    if (isEmpty())
    {
    cout << "The Stack is cleared. \n";
    
    
    }

    else
    {
        item = top ->value;
        temp = top ->next;
        delete top;
        top = temp;
    
    }

}



template <class T>
bool IntStack<T>::isEmpty()
{

    bool status;
    if (!top)
        status = true;
    else
        status = false;
    
    return status;

}









