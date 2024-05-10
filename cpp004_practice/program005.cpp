// sqaure and root of a number
#include<cmath>
#include<iostream>
using namespace std ; 

int main(){
    int num = 4 ;
    cout << "number = " << num << endl ;
    int sq = pow(num,2) ;
    cout << "sqaure of " << num << " = " << sq << endl ;
    float rt = pow(num,0.5) ;
    cout << "root of " << num << " = " << rt << endl ;
    return 0 ;
}

/*
#extra
- in c++ endl is a new line character
- pow( base , exponent ) is a power function present in cmath header file 
- so to use pow() we need to include cmath
*/