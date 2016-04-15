//  Operations.hpp
//  Created by Luis Mejia 
//  Copyright © 2015 All rights reserved.


#ifndef Operations_hpp
#define Operations_hpp

#include <stdio.h>
#include <iostream> 



class Operations
{
public:
    
    Operations();
    
    double multiplication(double a, double b);
    double addition(double a, double b);
    double subtraction(double a, double b);
    double division(double a, double b);
    int modulo(int a, int b);
    
};



#endif /* Operations_hpp */
