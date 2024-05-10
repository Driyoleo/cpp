// reverse a three digit number

#include<iostream>
using namespace std ; 

int main(){
    int num = 123 ;
    int a = (num - num % 100) / 100 ;
    int b = ((num % 100) - (num % 100) % 10 ) / 10 ;
    int c = num % 10 ;
    int rev = c * 100 + b * 10 + a ;
    cout << "actual number is " << num << " and reversed is " << rev << endl ;
    return 0 ;
}
