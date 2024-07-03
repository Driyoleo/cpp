#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    vector <int> vec ;
    cout << "is the vector empty now ? (0/1) : " << vec.empty() << endl ; 
    cout << "vector now : " ;
    for (int i = 0 ; i < 4 ; i++)
    {
        vec.push_back(i*i) ;
        cout << vec[i] << " ";
    }
    cout << endl ;
    cout << "size of vector now is : " << vec.size() << endl ;
    cout << "is the vector empty now ? (0/1) : " << vec.empty() << endl ;
    cout << endl ;


    vector <int> vec1 ;
    cout << vec1.size() <<  " " << vec1.capacity() <<  endl ;
    vec1.resize(10) ;
    cout << vec1.size() << " " << vec1.capacity() << endl ;
    vec1.resize(5) ;
    cout << vec1.size() << " " << vec1.capacity() << endl ;
    vec1.shrink_to_fit() ;
    cout << vec1.size() << " " << vec1.capacity() << endl ;  



    return 0 ;
}