//
//  Calculator.h
//  Sci_Fi
//


#ifndef Calculator_h
#define Calculator_h
#include "IntStack.h"

#include "ScientificCalculator.h"
#include <stack>
#pragma once


class Calculator
{
    
public:
    
    Calculator(int a, int b);
    ~Calculator();
    
    
    int add (int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    int clear(int previousValues);
    
    
private:
    int currentVal = 0;
    std::stack<int>previousValues;
    
    
    int a;
    int b;
    
    
    
    
};









#endif /* Calculator_h */
