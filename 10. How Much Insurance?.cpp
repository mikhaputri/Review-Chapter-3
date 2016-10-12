//
//  10.cpp
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
    float replacementCost;
    float insurancePercent = 0.8;
    
    cout<<"How much is the amount of the replacement cost of your building(s)?"<<endl;
    cin>> replacementCost;
    
    float amountInsurance = insurancePercent*replacementCost;
    
    cout<<"The minimum amount of Insurance you should buy is $"<<amountInsurance<<"."<<endl;
    
    return 0;
}
