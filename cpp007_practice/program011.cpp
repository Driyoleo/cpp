// square and root of a number

#include<cmath>
#include<iostream>
using namespace std ;

int main(){
    int num ;
    cout << "enter the number : " ;
    cin >> num ;
    int sq = pow( num , 2 ) ;
    int rt = pow( num , 0.5 ) ;
    cout << "square = " << sq << endl ;
    cout << "root = " << rt ;
    return 0 ;
}