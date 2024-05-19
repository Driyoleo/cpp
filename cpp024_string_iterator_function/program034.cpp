// string iterator function

#include<iostream>
using namespace std ;

int main(){

    // begin()
    string line = "i am a good boy" ;
    string :: iterator itr = line.begin() ;
    cout << *itr << endl ;

    // end()
    itr = line.end() - 1 ;
    cout << *itr <<  endl ;

    // rbegin()
    string :: reverse_iterator ri ;
    ri = line.rbegin() ;
    cout << *ri << endl ;

    // rend()
    ri = line.rend() - 1 ;
    cout << *ri << endl ;

    // rfind()
    line = "hi , i am a mad boy" ;
    int index = line.rfind('i') ;
    cout << index << endl ;

    line = "i am a good boy" ;
    string :: const_iterator citr = line.begin() ;
    cout << *citr << endl ;
    return 0 ;
}