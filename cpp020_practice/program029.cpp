/*
Q> Given an array arr[] of size N. The task is to find the sum of the contiguous subarray within a arr[] with the largest sum.
*/

#include<iostream>
using namespace std ;

int main(){
    int arr[] = {-2,3,4,-1,-2,1,5,-3} ;
    int max = 0 ;
    int len = sizeof(arr)/4 ;
    for (int i : arr){
        if (max > i ){
            max = i ;
        }
    }
    for (int j = 0 ; j < len ; j++){
        int sum = 0 ;
        for (int n = j ; n < len ; n++ ){
            sum+= arr[n] ;
            if (max < sum ) {
                max = sum ;
            }
            // cout << arr[j] << " " <<  arr[n] << " " <<  sum << " " << max << endl ;  // check statement
        }
    } 
    cout << max ;
    return 0 ;
}