#include<iostream>
#include<vector>
using namespace std ;

ostream& operator<< (ostream& output , vector <int> v)
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
    
    // push_back..
    for (int i = 0 ; i < 5 ; i ++ ) 
    {
        vec.push_back(i+i) ;
    }
    cout << vec << endl;
    
    // pop_back()..
    vec.pop_back() ;
    cout << vec << endl;
    // cout << vec.size() << endl ;


    // vec.insert()
    vec.insert(vec.begin() , 2 , 1) ;
    cout << vec ;
    vec.insert(vec.begin() , 2 , *(--(vec.end()))) ;
    cout << vec ;
    // using iterator
    auto it = vec.begin() ;
    vec.insert(it , 1 , 1000 ) ;
    cout << vec << endl ;

    // vec.erase() ..
    it = vec.begin() ;
    vec.erase(it) ;
    cout << vec ;
    it = vec.begin() ;
    vec.erase(it, (it+vec.size()-1)) ;
    cout << vec << endl ;

    // clear() ..
    vec.clear() ;
    cout << "size : "<< vec.size() << endl ; 
    

    return 0 ;
}