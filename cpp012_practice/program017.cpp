/*
q> A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
   Ask user for quantity
   Suppose, one unit will cost 100.
   Judge and print total cost for user.
*/

#include<iostream>
using namespace std ;

int main(){
    int qt ;
    cout << "enter the purchased quantity : " ;
    cin >> qt ;
    int cost = qt * 100 ;
    if (cost > 1000){
        cost = cost * 90 / 100 ;
    }
    cout << "your final cost = " << cost ;
    return 0 ;
}