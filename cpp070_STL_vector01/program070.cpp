#include<iostream>
#include<vector> 
using namespace std ;

template <class T>
ostream& operator<< (ostream& output , vector <T> v)
{
    for (int i = 0 ; i < v.size() ; i++) 
    {
        output << v[i] << " " ;
    }
    output << endl ;
    return output ;
}

int main()
{
    vector <int> vec1 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        vec1.push_back(i) ;
    }
    cout << vec1 ;
    vector <int> vec2(6,3) ;
    cout << vec2 ;
    return 0 ;
}