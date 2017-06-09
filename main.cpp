//
//  main.cpp
//  Sci_Fi
//
//  Created by Myles McKendell on 6/8/17.
//  Copyright © 2017 Myles McKendell. All rights reserved.
//

#include <iostream>
#include "Calculator.h"
#include "ScientificCalculator.h"
#include "IntStack.h"

#include <string>


using namespace std;

//Function prototype
void deleteCalc(Calculator* calc);
void getStackSize(int &);
void menu (int &);
void pushItem(IntStack<string> &);
void popItem(IntStack<string> &);



const int Push_Choice = 1,
            Pop_Choice = 2,
            Quit_Choice = 3;





int main()
{
   // const int Max_Values;
 
    int choice;
    
      IntStack<string> stack;
    
    
  //  Calculator* Calc = new Calculator();
//Calculator* SciCalc = new ScientificCalculator();
   
    
  //  delete(Calc);
   // delete(SciCalc);
    
    
    
    
  
    do
    {
        menu(choice);
        if (choice != Quit_Choice)
        {
            switch (choice)
            
            {
            
                case Push_Choice:
                    pushItem(stack);
                    break;
                case Pop_Choice:
                    popItem(stack);
                    break;
            }
        }
        
    }while (choice != Quit_Choice);
    
    return 0;
    //int choice_A;
   // int choice_B;
    
    
    /* this creates a intQueue object;
    IntStack iQueue;*/
    
}
    
    void menu (int &choice)
{
cout << "What do you want to do? \n"
    << Push_Choice
    << " - Place the number onto the list\n"
    << Pop_Choice
    << " - Place the number onto the list\n"
    << Quit_Choice
    << " - Quit the program\n";
cin >> choice;

    
    while (choice <Push_Choice || choice > Quit_Choice)
    {
    cout << "Please enter a valid choice: ";
        cin >> choice;
    }

}
    
    
    void pushItem(IntStack<string> &stack)

{
    string item;

    
    
    cin.ignore();
    cout << "\nEnter a item: ";
    getline(cin,item);
    stack.push(item);
}


void popItem(IntStack<string> &stack)
{

    string item = "";
    
    stack.pop(item);
    
    if (item != "")
        cout << item << "was popped. \n";
}







void deleteCalc(Calculator* calc)

{
    delete calc;
    calc = nullptr;



}
