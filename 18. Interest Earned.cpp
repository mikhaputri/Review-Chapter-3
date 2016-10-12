//
//  18.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 12/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal, interestRate, time;
    
    cout<<"What is your initial balance? ";
    cin>> principal;
    
    cout<<"What is the current interest rate? ";
    cin>> interestRate;
    
    cout<<"How many times will the interest is compounded? ";
    cin>> time;
    
    float interestDecimal = interestRate/100;
    double rateTime = interestDecimal/time;
    double amount = principal*(1+pow(rateTime,time));
    long double interest = amount - principal;
    
    cout<<"Interest Rate: "<<setw(9)<<interestRate<<"%"<<endl;
    cout<<"Time Compounded: "<<setw(5)<<time<<endl;
    cout<<setprecision(2)<<fixed<<showpoint<<left;
    cout<<"Principal: "<<setw(9)<<"\t"<<"$"<<principal<<endl;
    cout<<"Interest: "<<setw(10)<<"\t"<<"$"<<interest<<endl;
    cout<<"Amount in Savings: "<<setw(1)<<"$"<<amount<<endl;
    
    return 0;
    
}