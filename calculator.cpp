//  calculator.cpp
//  Created by Luis Mejia
//  Copyright © 2015 All rights reserved.
#include <iostream>
#include <iomanip>
#include "Operations.hpp"


/*Instead of using namepsace std in this program, I decided to use "std::" instead. I've read in multiple forums and Google C++ Style Guide that using namespace std because it may cause collisions with parts of code using the same namespace. "Declaring entities in namespace std is undefined behavior, i.e., not portable". */

int main()
{
    int x;
    int y;
    
    double z;
    double w;
    int operation;
    
    Operations calculation;
    
    
    std::cout << "Which operation would you like to choose?" << "\n" << std::setfill('-') << std::setw(70)
    << "\n"<< "Multiplication(1), Modulo(2), Division(3), Addition(4), Subtraction(5):";
    std::cin >> operation;
    std::cout << std::setfill('-') << std::setw(70) << "\n";
   

    if(operation == 1)
    {
    
        std::cout << "Enter the first number you would like to multiply: ";
        std::cin >> z;
        std::cout << "Enter the second number you would like to multiply: ";
        std::cin >> w;
        std::cout<<"The result is: "<< calculation.multiplication(z,w);
        std::cout<<std::endl;
    }
    
    if(operation == 2)
    {
        std::cout<<"Enter the first number you would like to modulize: ";
        std::cin>> x;
        std::cout<<"Enter the second number you would like to modulize: ";
        std::cin>>y;
        std::cout<<"The result is: "<< calculation.modulo(x,y);
        std::cout<<std::endl;
    }
    
    if(operation == 3)
    {
        std::cout<<"Enter the first number you would like to divide: ";
        std::cin>> z;
        std::cout<<"Enter the second number you would like to divide: ";
        std::cin>>w;
        std::cout<<"The result is: "<< calculation.division(z,w);
        std::cout<<std::endl;
    }

    if(operation == 4)
    {
        std::cout<<"Enter the first number you would like to add: ";
        std::cin>> z;
        std::cout<<"Enter the second number you would like to add: ";
        std::cin>>w;
        std::cout<<"The result is: "<< calculation.addition(z,w);
        std::cout<<std::endl;
    }

    if(operation == 5)
    {
        std::cout<<"Enter the first number you would like to subtract: ";
        std::cin>> z;
        std::cout<<"Enter the second number you would like to subtract: ";
        std::cin>>w;
        std::cout<<"The result is: "<< calculation.subtraction(z,w);
        std::cout<<std::endl;
        
    }
    
}




