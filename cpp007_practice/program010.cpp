// area of triangle

#include<iostream>
using namespace std ;

int main(){
    int base , height ;
    cout << "enter the base lenght : " ;
    cin >> base ;
    cout << "enter the height length : " ;
    cin >> height ; 
    int area = 0.5 * base * height ;
    cout << "area calculated = " << area ;
    return 0 ;
}