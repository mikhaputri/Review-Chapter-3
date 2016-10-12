//
//  Average Rainfall.cpp
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
    string month1, month2, month3, month4, month5;
    float numOfInches;
    cout<< "Please enter the nanme of the month(s): ";
    cin>>month1>>month2>>month3;
    
    cout<<"Please enter number of rain in inches: ";
    cin>>numOfInches;
    
    cout<<"The average rainfall for "<<month1<<"\t"<<month2<<"\t"<<month3<<" is "<<numOfInches;
    return 0;
}