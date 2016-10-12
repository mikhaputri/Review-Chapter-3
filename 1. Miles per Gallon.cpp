//
//  Miles per Gallon.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 12/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int numberOfGallons, numberOfMiles;
    cout<< "Please enter the number of gallons of gas ";
    cin>> numberOfGallons;
    cout<< " Enter the number of miles it can be driven on a full tank ";
    cin>> numberOfMiles;
    
    int predictedMilesDriven = numberOfMiles/numberOfGallons;
    
    cout<< "The number of miles that may be driven per gallon of gas is "<<predictedMilesDriven<<endl;
    
    return 0;
}
