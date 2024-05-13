// pointer

#include<iostream>
using namespace std ;

int main(){
    int a = 2 ;
    // declaring pointer object 
    int* b = &a ;

    cout << "address of a : " << &a << " and value of b : " << b << endl ;
    cout << "value of a : " << a << " and value at pointed address of b : " << *b << endl ;
    return 0 ;
}