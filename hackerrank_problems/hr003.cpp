/*
Q> take input as :
4  // length of array 
1 2 3 4 
.. then give out after reversing it : 
4 3 2 1
*/

#include<iostream>
using namespace std ;

int main() {
    int len ;
    cin >> len ;
    int arr[len] ;
    for(int i=0 ; i<len ; i++){
        cin >> arr[i] ;
    }
    for (int i=len-1 ; i>=0 ; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}


/*

# extra :

input : 1 2 3 4 67
can be taken as :
    1. for(int i=0 ; i<len ; i++){
            cin >> arr[i] ;
        }

    2. while(cin >> i){
        cout << i ;
    }

    note : 
        - but in while it goes to infinite if you manualy not break it at some point

*/