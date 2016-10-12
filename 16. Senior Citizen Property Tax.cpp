//
//  16.cpp
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
    double actualValue;
    float taxRate;
    float const assessPercentage = 0.6;
    float const exemption = 5000;
    
    cout<< "Please input the actual value of your house: ";
    cin>> actualValue;
    
    cout<<"Please input the current tax rate (per $100 of assessed value): ";
    cin>>taxRate;
    
    double assessedValue = actualValue*assessPercentage;
    double afterExemption = assessedValue - exemption;
    double assessCharge = afterExemption/100;
    double propertyTax = assessCharge*taxRate;
    double quarterlyPay = propertyTax/4;
    
    cout<< "The total annual property tax of actual value $"<<actualValue<<" is $"<<propertyTax<<endl;
    cout<< "The quarterly paybill is $"<<quarterlyPay<<endl;
    
    return 0;
    
}