#include<iostream>
using namespace std ;

int main()
{
    int a = 3 ;
    int *b = &a ;
    cout << b << " : " << *b << endl ;
    *b = 2 ;
    cout << b << " : " << *b << " , " << a << endl;
    int *c = new int(8) ;
    cout << c << " : " << *c << endl ;
    delete c ;
    cout << c << endl ;

    int *arr = new int(2) ;
    arr[0] = 10 ;
    arr[1] = 20 ;
    cout << "arr[0] : " << arr[0] << endl ;
    cout << "arr[1] : " << arr[1] << endl ;
    delete arr ; // delete[] arr ;
    cout << "arr[0] : " << arr[0] << endl ;
    cout << "arr[1] : " << arr[1] << endl ;
    
    return 0 ;

}