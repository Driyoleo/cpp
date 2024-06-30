#include<iostream>
using namespace std ;

template <class T1 , class T2 , class T3 > 
float bigger(T1 n1 , T2 n2 , T3 n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return float(n1) ;
    }
    else if (n2 > n1 && n2 > n3)
    {
        return float(n2) ;
    }
    else 
    {
        return float(n3) ;
    }
}

int main()
{
    cout << bigger(1,4.7f,3.3) ;
    return 0 ;
}