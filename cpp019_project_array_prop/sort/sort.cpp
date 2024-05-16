// sort funtion for int array 1 dimensional

#include<iostream>
using namespace std ;

int main(){
    int arr[] = {1,3,9,2,4,8,5,3} ;
    int len = sizeof(arr)/4 ;
    for (int i = 0 ; i < len ; i++ ){
        for (int j = (i+1) ; j < len ; j++){
            if (arr[i]>arr[j]){
                int a , b ;
                a = arr[i] ;
                b = arr[j] ;
                arr[i] = b ;
                arr[j] = a ;
            }
        }
    }
    for (int i : arr){
        cout << i << " , " ;
    }
    return 0 ;
}

