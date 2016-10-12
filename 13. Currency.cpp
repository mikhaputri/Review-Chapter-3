//
//  13.cpp
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
    float USD_Amount;
    
    float const YEN_PER_DOLLAR = 98.93;
    float const EUROS_PER_DOLLAR =0.74;
    
    cout<<"Please enter the amount of USD you want to convert to YEN and EUROS: ";
    cin>> USD_Amount;
    
    float YEN_Amount = USD_Amount*YEN_PER_DOLLAR;
    float EUROS_Amount = USD_Amount*EUROS_PER_DOLLAR;
    
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"$ "<<USD_Amount<<" = ¥"<<YEN_Amount<<endl;
    cout<<"$ "<<USD_Amount<<" = €"<<EUROS_Amount<<endl;
    
    return 0;
}