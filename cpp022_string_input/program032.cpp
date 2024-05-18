// input ways of string

#include<iostream>
#include<string>
#include<sstream>
using namespace std ;

int main(){
    // 1.
    // string str ;
    // cout << "enter your name : " ;
    // cin >> str ;
    // cout << "nice to meet you " << str <<"." ;

    string str ;
    cout << "enter your name : " ;
    getline( cin , str ) ;
    cout << "have a good day .." << str << endl ; 

    stringstream obj(" hi i am robo") ;
    string temp ;
    while (obj >> temp){
        cout << temp << endl ;
    }

    return 0 ;
}

