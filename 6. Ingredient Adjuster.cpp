//
//  6.cpp
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
    int noOfCookies;
    float cupOfSugar = 1.5;
    float cupOfButter = 1;
    float cupOfFlour = 2.75;
    int totalCookies = 48;
    
    float sugar = cupOfSugar/totalCookies;
    float butter = cupOfButter/totalCookies;
    float flour = cupOfFlour/totalCookies;
    
    cout<<"How many cookies do you want to bake?"<<endl;
    cin>>noOfCookies;
    
    float sugarNeeded = sugar*noOfCookies;
    float butterNeeded = butter*noOfCookies;
    float flourNeeded = flour*noOfCookies;
    
    cout<<"Here are the list of sugar, butter and flour needed for "<< noOfCookies<<" cookies (in cups).";
    cout<< "Sugar: "<<sugarNeeded<<endl;
    cout<< "Butter: "<<butterNeeded<<endl;
    cout<< "Flour: "<<flourNeeded<<endl;
    
    return 0;
}