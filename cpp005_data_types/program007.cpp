// Data types

#include<iostream>
// #include<typeinfo>
using namespace std ; 

int main(){
    // how to know data type ..
    // typeid(variable).name()
    cout << "here \n integer = i \n float = f \n double = d \n char = c \n wide character = w \n boolean = b " << endl ;
    
    //example : 
    int a = 1;
    cout << typeid(a).name() << endl ;

    float b = 1.2f ;
    cout << typeid(b).name() << endl ; 

    double c = 1.4 ;
    cout << typeid(c).name() << endl ;

    char d = 'f' ;
    cout << typeid(d).name() << endl ;

    wchar_t e = 'l' ;
    cout << e << " " << typeid(e).name() << endl ;

    bool f = false ;
    cout << typeid(f).name() << endl ;
    
    return 0 ;
}

/*

# extra :
- "f" is a const char* and 'f' is a char 
- 'l' is a char  and  'hello' is integer 
- if we do ..
    char c = 'hello' ;
    cout << c ;  ----> output : o  
    .. only the last character is assigned to c(variable)
- if we do .. 
    wchar_t c = 'hello'
    cout << c ;  ----> here some suspicious int to wchar_t conversion is taking place

*/