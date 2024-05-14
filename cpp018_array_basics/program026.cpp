// array basics

#include<iostream>
using namespace std ;

int main(){
    int arr[2] = { 1 , 2 } ;
    arr[3] = 2 ;
    cout << arr << " " << &arr[0] ;

    return 0 ;
}


/*
# extra 
- int arr[] ;
  .. output :
    error: storage size of 'arr' isn't know

- int arr[] = { 1 , 2f , 3.9 , 'h' } ;
  .. output :
    error: unable to find numeric literal operator 'operator""f'

- int arr[] = { 1 , 3.9 , 'h' } ;
  .. output :
    error: narrowing conversion of '3.8999999999999999e+0' from 'double' to 'int' [-Wnarrowing]

- note : 
    - 3.9f means -- 3.9  , data type = float
    - 3.9  means -- 3.8999999999999999e+0 , data type = double 


- int arr[] = { 1 , 'h' } ;
 .. output :
    - no error cause 'h' is converted into int

- cout << arr ;
  .. output :
    0xacebfffac8    // address of index 0

- cout << *arr ;
  .. output :
    1               // value at index 0

- cout << (arr[1] = 2 ) ;
  .. output : 
    2               // the updated value of index 1 ;


# conclusion or key points : *****

- keep data of same type inside the array as given while declaration or definning it
- arr_variable contains the address of index 0 not the total array
- arr[1] = 2 .. it returns the updated value at index 1 
- if our arr size is 3 , then also arr[5] exist and we can add value to it



*/