//
//  ScientificCalculator.h
//  Sci_Fi
//

#ifndef ScientificCalculator_h
#define ScientificCalculator_h

#include <stack>
#include <math.h>
#include "Calculator.h"
#include <string>
#pragma once





class ScientificCalculator //: public Calculator

{

public:
    
    
    ScientificCalculator(int a, int b);
    ~ScientificCalculator();



    int sin(int b);
    int cos(int a);
    int tan(int b, int a);
    
    
private:
    
    
    //public Calculator;
    int currentVal = 0;
    std::stack<int>
  
      previousValues;
    
    
};


#endif /* ScientificCalculator_h */
