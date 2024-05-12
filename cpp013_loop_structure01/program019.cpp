// for loop

#include<iostream>
using namespace std ;

int main(){
    for ( int i ; i<6 ; i++){
        cout << i << endl ;
    }
    return 0;
}




/*
# extra 
- in place of int i we can put any other statement we want , and it will run once before the
  loop start
  eg. 
    int i ;
    for ( (cout << "hello" << endl ) ; i < 6 ; i++){
        cout << i << endl ;
    }
    - output :
    hello
    0
    1
    2
    3
    4
    5
- there is no difference will create in the loop for i++ and ++i , but they are diff statement 
- if condition is always true it will go to infinite 
- bonus :
    int i ;
    cout << i ;
    - output :
        0 
    - so int i; by default have a value 0 

*/