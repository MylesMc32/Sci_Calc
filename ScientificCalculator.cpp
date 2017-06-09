//
//  ScientificCalculator.cpp
//  Sci_Fi
//


#include <stdio.h>
#include "ScientificCalculator.h"
#include "Calculator.h"
#include <string>
#include <math.h>





/*ScientificCalculator::ScientificCalculator(int a, int b) : Calculator(a, b)
{
}
*/

ScientificCalculator::ScientificCalculator::ScientificCalculator(int a, int b){}
ScientificCalculator::~ScientificCalculator(){}


int ScientificCalculator::cos(int a)
{
    int num = a;
    previousValues.push(num);
    return num;
    
    
}

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
