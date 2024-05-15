/*
Q> Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is
   exactly x. 
*/

#include<iostream>
using namespace std ;

int main(){
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 0 } ;
    int num ;
    cout << " enter value of num : " ;
    cin >> num ;
    int c = 0 ;
    for (int i : arr ) {
        for (int j : arr ){
            if ((i+j) == num ){
                c+=1 ;
            } 
        }
    }
    if (c>0) {
        cout << "yes pair of numbers exist " ;
    }
    else {
        cout << "no there is no such pair of numbers" ;
    }
    return 0 ;
}