//
//  15.cpp
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
    float const countyTax = 0.6;
    float const propTaxAmount = 0.75; // 75cents of 100 assess. value
    
    cout<<"Please input the actual value of your land: ";
    cin>> actualValue;
    
    double assessValue = actualValue*countyTax;
    double assessCharge = assessValue/100;
    double propertyTax = propTaxAmount * assessCharge;
    
    cout<<"The total of the assessment value is $"<<assessValue<<endl;
    cout<<"The total of the property tax is $"<<propertyTax<<endl;
    
    return 0;
}
