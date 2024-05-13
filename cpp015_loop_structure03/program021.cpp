 // break and continue

#include<iostream>
using namespace std ;

int main(){
    cout << "printing first even number from 33 to 46  through break statement" << endl ;
    for (int i = 33  ; i < 46 ; i++){
        if ( i % 2 == 0 ){
            cout << "first even number : " << i << endl ;
            break;
        }
    }

    cout << "printing all even numbers between 33 to 46  through continue statement" << endl ;
    int i = 33 ;
    while ( i < 46 ) {
        if ( i % 2 != 0 ){
            i++ ;
            continue;
        }
        cout << i << endl ;
        i++ ;
    }
    return 0 ;
}