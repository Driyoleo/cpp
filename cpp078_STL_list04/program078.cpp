#include<iostream>
#include<list>
using namespace std ;

ostream& operator<< (ostream& output , list <int> l)
{
    if (l.size() == 0 )
    {
        output << "vector : empty " ;
        return output ;
    }
    auto it = l.begin() ;
    output << "vector : " ;
    for (int i = 0 ; i < l.size() ; i++) 
    {
        output << *(it) << " " ;
        it++ ;
    }
    return output ;
}

list <int> :: iterator operator+(list <int> :: iterator it , int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        it++ ;
    }
    return it ;
}
int main()
{
    list <int> l ;
    for (int i = 0 ; i < 5 ; i++)
    {
        l.push_back(i+i) ;
    }
    l.push_front(100) ;
    cout << l << endl ;

    l.pop_back() ;
    cout << l << endl ;
    l.pop_front() ;
    cout << l << endl ;

    auto it = l.begin() ;
    l.insert(it , 2 ) ;
    cout << l << endl ;
    l.insert((it+3) , 2 , 100) ;
    cout << l << endl ;

    l.erase(it+5) ;
    cout << l << endl ;
    l.erase(it+1 , it+3);
    cout << l << endl ;

    l.clear() ;
    cout << l << endl ;

    return 0 ;
}