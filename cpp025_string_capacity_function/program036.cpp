// string capacity functions

#include<iostream>
using namespace std ;

int main(){

    // length()
    cout << str.length() << endl ;

    // capacity() 
    cout << str.capacity() << endl ;

    // resize() 
    str.resize(10) ;
    cout << str << endl ;

    // shrink_to_fit
    string str = " hi my name is driyo " ;
    str.shrink_to_fit() ;
    cout << str.capacity() << " " << str << endl ;
    return 0 ;
}