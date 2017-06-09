//
//  IntStack.h
//  Sci_Fi
//



#ifndef IntStack_h
#define IntStack_h
#pragma once
#include "ScientificCalculator.h"
#include "Calculator.h"


using namespace std;



template <class T>
class IntStack

{
    
  public:
    
    IntStack()
    {top = nullptr;}

    ~IntStack();
    
    void push(T);
    void pop(T &);
    bool isEmpty();
    
    private:
   struct StackNode
    {
        T value;
        StackNode *next;
    
    
    };

    StackNode *top;
    

    
    
 
    
    
};








#endif /* IntStack_h */
