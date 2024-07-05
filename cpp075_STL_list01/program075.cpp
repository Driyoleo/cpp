#include<iostream>
#include<list>
using namespace std ;


int main()
{
    list <int> l1 = {1,3,5,7,9} ;
    cout << l1.size() << endl ;
    list <int> l2(4) ;
    cout << l2.size() << endl ;
    list <int> l3 ;
    cout << l3.empty() << endl ;

    return 0 ;
}