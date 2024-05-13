/*
Q> Write a program in C++ to check whether a number is prime or not.
   Sample Output:
   Input a number to check prime or not: 13
   The entered number is a prime number.
*/

#include<iostream>
using namespace std ;

int main(){
    int num ;
    cout << "Input a number to check prime or not: " ;
    cin >> num ;
    int c = 0 ;
    for (int i = 1 ; i < num ; i++){
        if ( num % i == 0 ){
            c++;
        }
        if (c>1){
            cout << "The entered number is not a prime number." ;
            break;
        }
    }
    if (c<2){
        cout << "The entered number is a prime number." ;
    }
    return 0;
}
