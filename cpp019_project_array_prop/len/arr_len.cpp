// len founder of array with minimum memory and effective code for big programs

#include<iostream>
#include<string>
#include<cmath>
using namespace std ;

int main(){
    // version 1 :
    int arr[] = { 23 , 45 , 65 , 75 , 21 , 4 , 100 , 5 , 89 ,23 ,44 ,56 } ;
    string slen = typeid(arr).name() ;
    int i = slen.find("_") ;
    int len = 0 ;
    for (int j = i-1 ; j > 0 ; j--){
        len += (int(slen[j])-48)*pow(10,i-(j+1)) ;
    }
    cout << len << endl;

    // version 2 : with capability of multi dimensionla array 
    
    // int arr1[3][3][3] = {0} ;
    // string slen = typeid(arr1).name() ;
    // cout << slen.find("_") ;
    // continue after learning string


    return 0 ;
}