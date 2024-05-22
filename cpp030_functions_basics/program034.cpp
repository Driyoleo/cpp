// functions

#include<iostream>
using namespace std ;

int sum(int a , int b);

int main(){
    int num1 = 2 ;
    int num2 = 3 ;
    cout << sum(num1 , num2 ) ;
    return 0 ;
}

int sum(int a , int b){
    int c = a + b ;
    return c ;
} 