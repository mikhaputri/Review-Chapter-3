//
//  Male and Female Percentage.cpp
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
    float noOfMales, noOfFemale;
    cout<<"Please enter the number of male in a class ";
    cin>> noOfMales;
    cout<<"Please enter the number of female in a class ";
    cin>> noOfFemale;
    
    int totalStudent = noOfMales+noOfFemale;
    
    float percentageMale = noOfMales/totalStudent;
    float percentageFemale = noOfFemale/totalStudent;
    
    cout<<"The percentage of the males is "<<percentageMale<<setprecision(2)<<fixed<<showpoint<<"."<<"The percentage of the females is "<<percentageFemale<<"."<<endl;
    
    return 0;
}