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
    return 0 ;
}