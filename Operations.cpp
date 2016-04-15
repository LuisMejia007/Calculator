//  Operations.cpp
//  CSE30
//  Created by Luis Mejia 
//  Copyright © 2015 All rights reserved.

#include "Operations.hpp"

Operations :: Operations()
{
    
}

double Operations :: multiplication(double a, double b)
{
    double result;
    result = a * b;
    return result;
}

double Operations :: division(double a, double b)
{
    double result;
    result = a / b;
    return result;
}

double Operations :: addition(double a, double b)
{
    double result;
    result = a + b;
    return result;
}

double Operations :: subtraction(double a, double b)
{
    double result;
    result = a - b;
    return result;
}

int Operations:: modulo(int a, int b)
{
    int result;
    result = a % b;
    return result; 
}