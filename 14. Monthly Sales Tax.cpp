//
//  14.cpp
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
    string month;
    float totalCollected;
    float const countyTax =	0.02;
    float const salesTax = 0.04;
    
    cout<<"Please enter the name of the month: ";
    cin>> month;
    
    cout<< "Please enter the total amount collected in that month: ";
    cin>> totalCollected;
    
    float sales = totalCollected/1.06;
    float totalCountyTax = sales*countyTax;
    float totalSalesTax = sales*salesTax;
    float totalTax = totalCountyTax + totalSalesTax;
    
    cout<<setprecision(2)<<fixed<<showpoint<<right<<endl;
    cout<<"Month: "<<month<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Total collected: "<<setw(5)<<"$"<<totalCollected<<endl;
    cout<<"Sales: "<<setw(15)<<"$"<<sales<<endl;
    cout<<"County Sales Tax: "<<setw(4)<<"$"<<totalCountyTax<<endl;
    cout<<"State Sales Tax: "<<setw(5)<<"$"<<totalSalesTax<<endl;
    cout<<"Total Sales Tax: "<<setw(5)<<"$"<<totalTax<<endl;
    
    return 0;
    
}