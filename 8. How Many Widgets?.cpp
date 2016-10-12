//
//  8.cpp
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
    float palletWeight, palletWithWidget;
    float widgetsWeigh = 12.5;
    
    cout<<"Please enter the weight of the pallet: ";
    cin>> palletWeight;
    
    cout<<"Please enter the weight of the pallet with stacked widgets: ";
    cin>> palletWithWidget;
    
    float totalStackedWidgets = palletWithWidget - palletWeight;
    int widgets = totalStackedWidgets/widgetsWeigh;
    
    cout<<"The number of widgets in the stack is "<<widgets<<"."<<endl;
    
    return 0;
}
