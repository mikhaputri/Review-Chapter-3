//
//  Test Average.cpp
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
    int test1, test2, test3, test4, test5;
    
    cout<<"Please input your five test score: ";
    cin>> test1>> test2>> test3>> test4>>test5;
    
    float totalAverage = (test1+test2+test3+test4+test5)/5;
    
    cout<< "The total average is "<<setprecision(2)<<fixed<<showpoint<<totalAverage;
    return 0;
}