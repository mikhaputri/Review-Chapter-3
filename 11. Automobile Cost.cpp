//
//  11.cpp
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
    float loan, insurance, gas, oil, tires, maintenance;
    
    cout<< "Please enter your loan payment in a month: ";
    cin>> loan;
    cout<< "Please enter your amount of insurance payment in a month: ";
    cin>> insurance;
    cout<< "Please enter your gas expenses in a month: ";
    cin>> gas;
    cout<<"Please enter you oil expenses in a month: ";
    cin>> oil;
    cout<<"Please enter you tires expenses in a month: ";
    cin>> tires;
    cout<<"Please enter you other maintenance payment in a month: ";
    cin>> maintenance;
    
    float monthlyExpenses = loan + insurance + gas + oil + tires +  maintenance;
    float annualExpenses = monthlyExpenses*12;
    
    cout<<"Your total monthly expenses is $"<<monthlyExpenses<<endl;
    cout<<"Your total annual expenses is $"<<annualExpenses<<endl;
    
    return 0;
}