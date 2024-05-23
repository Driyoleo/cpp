// callby 

#include<iostream>
using namespace std ;

void swap_callbyValue(int x , int y){
    int temp = x ;
    x = y ;
    y = temp ;
}
void swap_callbyPointer(int* x , int* y){
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}
void swap_callbyReference(int &x , int &y){
    int temp = x ;
    x = y ;
    y = temp ;
}




int main(){
    int a = 3 ;
    int b = 5 ;
    cout << "a = " << a << " , b = " << b << endl;

    cout << "swaping by  callby value :" << endl ;
    swap_callbyValue(a,b) ;                         // no swaping 
    cout << "a = " << a << " , b = " << b << endl;

    cout << "swaping by callby pointer :" << endl ;
    swap_callbyPointer(&a,&b) ;                     // swaping
    cout << "a = " << a << " , b = " << b << endl;

    cout << "swaping by callby reference variable : " << endl ;
    swap_callbyReference(a,b) ;                     // swaping
    cout << "a = " << a << " , b = " << b << endl;


    return 0 ;
}