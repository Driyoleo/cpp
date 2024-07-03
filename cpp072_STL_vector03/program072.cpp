#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    vector <int> v1 ;

    int size ;
    cout << "size of vector : " ;
    cin >> size ;
    v1.resize(size) ;

    cout << "so my vector is : " ;
    for (int i = 0 ; i<size ; i++)
    {
        v1[i] = i+i ;
        cout << v1.at(i) << " " ;
    }
    cout << endl ;

    cout << "element at the front : " <<  v1.front() << endl ;
    cout << "element at the back : " << v1.back() << endl ;

    int * p  = v1.data() ;
    cout << "element at the front : " <<  *p << endl ;
    cout << "element at the back : " << *(p+size-1)<< endl ;
    p++ ;
    cout << p[0] ;
    return 0 ;
}