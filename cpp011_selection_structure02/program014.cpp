// switch selection structure
/*
Q> there is a lottery with ticket number 1 to 100 and only three numbers ( 25 , 48 and 93) has prizes
   make a lottery ticket checker for people . 
    25 : supra mk4
    48 : DSLR cannon 1265xr
    93 : Iphone 12 
    other : try better luck next time
*/

#include<iostream>
using namespace std ;

int main(){
    int tk ;
    cout << "enter your ticket number : " ;
    cin >> tk ;

    switch (tk)
    {
    case 25:
        cout << "congratulations !!!" << endl ;
        cout << "your prize is --> supra mk4 !!" ; 
        break;
    case 48:
        cout << "congratulations !!!" << endl ;
        cout << "your prize is --> DSLR cannon 1265xr !!" ;
        break;
    case 93:
        cout << "congratulations !!!" << endl ;
        cout << "your prize is --> Iphone 12 !!" ;
        break;
    
    default:
        cout << "try better luck next time ";
    }
    return 0 ;
}