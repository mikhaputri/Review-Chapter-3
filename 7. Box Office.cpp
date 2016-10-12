//
//  7.cpp
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
    string movieName;
    int noOfAdultTickets, noOfChildTickets;
    float adultPrice = 10.00;
    float childPrice = 6.00;
    
    cout<<"Please enter the movie name: ";
    getline(cin, movieName);
    
    cout<<"Please input adult tickets sold: ";
    cin>> noOfAdultTickets;
    
    cout<<"Please input child tickets sold: ";
    cin>> noOfChildTickets;
    
    float totalAdultPrice = noOfAdultTickets*adultPrice;
    float totalChildPrice = noOfChildTickets*childPrice;
    float grossProfit = totalAdultPrice+totalChildPrice;
    float netProfit = 0.2 * grossProfit;
    float amountDistributor = grossProfit - netProfit;
    
    cout<< "Movie Name: "<<movieName<<endl;
    cout<< "Adult Tickets Sold: "<<noOfAdultTickets<<endl;
    cout<< "Child Tickets Sold: "<<noOfChildTickets<<endl;
    cout<< "Gross Box Office Profit: $"<<grossProfit<<endl;
    cout<< "Net Box Office Profit: $"<<netProfit<<endl;
    cout<< "Amount Paid to Distributor: $"<<amountDistributor<<endl;
    
    return 0;
    
}
