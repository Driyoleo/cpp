// push method for array 1 D 

#include<iostream>
using namespace std ;

int main(){
    int arr[] = {1,2,3,3,4,4,6} ;
    cout << "given array is : " ;
    for (int i : arr)
    {
        cout << i << " , " ;
    }
    
    int num ;
    cout << endl << "enter a number to push : " ;
    cin >> num ;

    int len = sizeof(arr)/4 ;
    arr[len] = num ;
    cout << typeid(arr).name() << endl ; 
    cout << arr[len] ;
    return 0 ;
}