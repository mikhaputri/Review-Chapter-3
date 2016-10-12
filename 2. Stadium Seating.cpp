//
//  Stadium Seating.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 12/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int ticketA, ticketB, ticketC;
    int classA = 15;
    int classB = 12;
    int classC = 9;
    
    cout<< "How many tickets of Class A you wish to order: ";
    cin>> ticketA;
    
    cout<< "How many tickets of Class B you wish to order: ";
    cin>> ticketB;
    
    cout<< "How many tickets of Class C you wish to order: ";
    cin>> ticketC;
    
    float total = ticketA*classA + ticketB*classB + ticketC*classC;
    
    cout<<"The total is $"<<setprecision(2)<<fixed<<showpoint<<total;
}