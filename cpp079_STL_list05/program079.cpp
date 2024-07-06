#include<iostream>
#include<list>
using namespace std ;

ostream& operator<<(ostream& output , list <int> l) 
{
    if (l.size() == 0) 
    {
        output << "list : empty" ;
        return output ;
    }
    output << "list : " ;
    auto it = l.begin() ;
    for (int i = 0 ; i < l.size() ; i++)
    {
        output << *it << " " ;
        it++ ;
    }
    return output ;
}

list <int> :: iterator operator+(list<int> :: iterator it , int n )
{
    for (int i = 0 ; i < n ; i++){
        it++ ;
    }
    return it ;
}

bool single_digit(const int& n) 
{
    return (n<10 && n>=0) ;
}


int main()
{
    cout << "use of splice ..." << endl ;
    list<int> l1 , l2 ;
    l1 = {1,2,3,4,5,6,7} ;
    cout << "1 " << l1 << endl ;  
    cout << "2 " << l2  << endl ;
    cout << endl ;

    // splice(iterator , list)
    auto it2 = l2.begin() ;
    l2.splice(it2,l1) ;
    cout << "1 " << l1 << endl ;
    cout << "2 " << l2  << endl ;
    cout << endl ;

    // splice(iterator , list , iterator) 
    auto it1 = l1.begin() ;
    it2 = l2.begin() ;
    l1.splice(it1 , l2 , it2+3 ) ;
    cout << "1 " << l1 << endl ;
    cout << "2 " << l2  << endl ;
    cout << endl ;

    // splice(iterator , list , iterator_start , iterator_end) 
    it1 = l1.begin() ;
    l1.splice(it1 , l2 , it2+1 , it2+3) ;
    cout << "1 " << l1 << endl ;
    cout << "2 " << l2  << endl ;
    cout << endl ;

    // remove(value)
    cout << "use of remove ..." << endl ;
    l2.remove(6) ;
    cout << "2 " << l2  << endl ;
    cout << endl ;

    // remove_if(bool_funciton)
    cout << "use of remove_if ..." << endl ;
    l1 = {1,6,10,27,3,40} ;
    cout << "before " << l1 << endl ;
    l1.remove_if(single_digit) ;
    cout << "after " << l1 << endl ;
    cout << endl ;

    // sort() 
    cout << "use of sort ..." << endl ;
    l1 = {10 , 20 , 40 , 20 , 30 } ;
    cout << "before " << l1 << endl ;
    l1.sort() ;
    cout << "after " << l1 << endl ;
    cout << endl ;

    // unique()
    cout << "use of unique ..." << endl ;
    l1 = {10 , 20 , 40 , 20 , 30 } ;
    l1.sort() ;
    cout << "before " << l1 << endl ;
    l1.unique() ;
    cout << "after " << l1 << endl ;
    cout << endl ;

    // reverse()
    cout << "use of reverse ..." << endl ;
    l1 = {10 , 20 , 40 , 20 , 30 } ;
    cout << "before " << l1 << endl ;
    l1.reverse() ;
    cout << "after " << l1 << endl ;
    cout << endl ;

    return 0 ;
}