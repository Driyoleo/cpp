/*
Q> Check if given strings are rotations of each other or not
*/

#include<iostream>
using namespace std ;

int main(){
    string str1 = "lol" ;
    string str2 = "lol" ;
    int len = str1.length() ;
    for (int i = 0 ; i < (len/2) ; i++){
        swap(str1[i] , str1[len-1-i]) ;
    }

    if (str1 == str2) {
        cout << "yes they are rotation of each other" ;
    }
    else {
        cout << "no they are not rotation of each other" ;
    }
    
    return 0 ;
}