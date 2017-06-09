//
//  Calculator.cpp
//  Sci_Fi
//


#include <stdio.h>
#include "Calculator.h"


Calculator::Calculator::Calculator(int a, int b){}
Calculator::~Calculator(){}


int Calculator::add(int a , int b)
{
    int num = a + b;
    previousValues.push(num);
    return num;


}

int Calculator::subtract(int a , int b)
{
    int num = a - b;
    previousValues.push(num);
    return num;



}



int Calculator::multiply (int a , int b)
{
    int num = a * b;
    previousValues.push(num);
    return num;

}


int Calculator::divide(int a , int b)
{


    int num = 0;
    if (b != 0)
        num = a/b;
    previousValues.push(num);
    return num;



}












