//
//  9.cpp
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
    int amountCookies;
    
    int caloriesPerServings = 300/10;
    int oneCookieCalories = caloriesPerServings/3;
    
    cout<< "How many cookies that you eat?"<<endl;
    cin>> amountCookies;
    
    int totalCalories = amountCookies*oneCookieCalories;
    
    cout<<"The total calories of "<<amountCookies<<" is "<< totalCalories<<"."<<endl;
}
