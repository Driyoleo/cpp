// string 

#include<iostream>
using namespace std ;

int main(){
    char str1[] = "hello" ;
    char str2[] = {'h','e','l','l','o','\0'};
    string str3("hello") ;
    string str4(4 , 'g') ;
    cout << " " << typeid(str1).name() << " " << typeid(str2).name() << " " << typeid(str3).name() << endl ;
    cout << str1 << " " << str2 << " " << str3  << " " << str4 ;

    return 0 ;
}

