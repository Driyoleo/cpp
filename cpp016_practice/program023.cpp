/*
Q > Write a program in C++ to find the perfect numbers between 1 and 500.
    The perfect numbers between 1 to 500 are:
    6
    28
    496
*/

#include<iostream>
using namespace std ;

int main(){
    cout << "The perfect numbers between 1 to 500 are:" << endl ;
    for (int i=1 ; i<=500 ; i++){
        int sum = 0 ;
        for ( int j=1 ; j<=(float(i)/2) ; j++){
            if ( i % j == 0){
                sum+= j ;
            }
        }
        if (sum == i){
            cout << i << endl ;
        }

    }
    return 0 ;
}