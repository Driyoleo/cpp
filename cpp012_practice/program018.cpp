/*
Q> A student will not be allowed to sit in exam if his/her attendence is less than 75%.
   Take following input from user
   Number of classes held
   Number of classes attended.
   And print
   percentage of class attended
   Is student is allowed to sit in exam or not.
*/

#include<iostream>
using namespace std ;

int main(){
    float ch , ca ;
    cout << "classes held : " ;
    cin >> ch ;
    cout << "classes attened : " ;
    cin >> ca ;
    float percent = (ca / ch) * 100 ;
    if (percent >= 75){
        cout << "allowed to sit in exam" ;
    }
    else {
        cout << "not allowed to sit in exam" ;
    }
    return 0 ;
}