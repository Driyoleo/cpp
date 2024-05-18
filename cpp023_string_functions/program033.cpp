// string basic fucntions

#include<iostream>
using namespace std ;

int main(){
    // swap 
    string str1 = "hello" ;
    string str2 = "world" ;
    cout << str1 << " " << str2 << endl;
    swap(str1 , str2 ) ;
    cout << str1 << " " << str2 << endl ;

    // size()
    cout << str1.size() << endl;

    // resize()
    cout << str2 << endl ;
    str2.resize(4) ;
    cout << str2 << endl ;

    // find()
    string sentence = "hello world how are you howard ?" ;
    cout << sentence.find("ho") << endl ; 
    // cout << "hello world how are you howard ?".find("ho") << endl ; 

    return 0 ;
}