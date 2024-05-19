// string basic fucntions

#include<iostream>
#include<cstring>
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

    // push_back() 
    sentence.push_back('c') ;
    cout << sentence << endl;

    // pop_back() 
    sentence = "hello" ;
    sentence.pop_back() ;
    cout << sentence << endl ;

    // clear()
    sentence.clear() ;
    cout << sentence << "." << endl ;

    // strncmp() 
    char s1[] = "az" ;
    char s2[] = "ab"  ;
    int result = strncmp(s1 , s2 , 2 ) ;
    cout << result << endl ;

    // replace() 
    sentence = "i am a good boy" ;
    sentence.replace( 7 , 4 ,  "bad") ;
    cout << sentence << endl ;

    // substr()
    sentence = "i am a good boy" ;
    cout << sentence.substr(0,1) << endl ;
    
    // erase()
    sentence = "i am a good boy" ;
    sentence.erase(7,5) ;
    cout << ". " << sentence << " ." << endl ;


    return 0 ;
}