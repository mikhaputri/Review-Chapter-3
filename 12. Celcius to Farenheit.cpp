//
//  12.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 12/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int celcius;
    
    cout<<"Please input the degrees in Celcius: ";
    cin>> celcius;
    
    float farenheit = (9/5)*celcius + 32;
    
    cout<<"The temperature is now "<<farenheit<<"°F."<<endl;
    
    return 0;
}