// while and do while loop

#include<iostream>
using namespace std ;

int main(){
    cout << "while loop " << endl ;
    int i ;
    while (i<=5) 
    {
        cout << i << endl ;
        i++;
    }
    cout << "do while loop" << endl ;
    int c = 0;
    do { 
        cout << c << endl ;
        c++ ;
    }while (c <=5 ) ;
    
    return 0 ;
}

