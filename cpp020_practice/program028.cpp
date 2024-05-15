/*
Q> Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times
   (and hence there is at most one such element). 
*/

#include<iostream>
using namespace std ;

int main(){
    int arr[] = {1,2,4,3,4,4,1,4,4} ;
    int len = sizeof(arr)/4 ;
    for (int i : arr) {
        int c = 0 ;
        for (int j : arr ) {
            if (i == j ){
                c++ ;
            }
        }
        if (c>(len/2)){
            cout << "majority element is : " << i ;
            break;
        }
    }
    return 0 ;
}