#include<iostream>
#include<vector>
using namespace std ;

template <class T>
ostream& operator<<(ostream& output , vector <T> v)
{
    output << "vector : " ;
    for (int i = 0 ; i < v.size() ; i++)
    {
        output << v[i] << " " ;
    }
    output << endl ;
    return output ;
}

int main()
{
    vector <int> vec ;
    cout << "vector : " ;
    for (int i = 0 ; i < 5 ; i++)
    {
        vec.push_back(i+i) ;
        cout << vec.back() << " " ;
    }
    cout << endl ;

    vector <int> :: iterator it = vec.begin() ;
    cout << "element at the front :"<< *it << endl ;

    it = vec.end() ;
    cout << "element at the end :"<< *(--it) << endl ;

    vector <int> :: reverse_iterator rit = vec.rbegin() ;
    cout << "element at the end :"<< *rit << endl ;
    
    rit = vec.rend() ;
    cout << "element at the front : " << *(--rit) << endl ;
    cout << endl ;

    vector <int> vec2 = {1,2,3,10} ;
    cout << vec2 ;

    vector <int> :: const_iterator cit = vec2.cbegin() ;
    cout << "element at the front :"<< *cit << endl ;

    cit = vec2.cend() ;
    cout << "element at the end :"<< *(--cit) << endl ;

    vector <int> :: const_reverse_iterator crit = vec2.crbegin() ;
    cout << "element at the end :"<< *crit << endl ;

    crit = vec2.crend() ;
    cout << "element at the front : " << *(--crit) << endl ;


    return 0 ;
}