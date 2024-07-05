#include<iostream>
#include<list>
using namespace std ;

ostream& operator<<(ostream& output , list <pair<int,int>> l)
{
    if (l.size()== 0)
    {
        output << "list : empty" << endl ;
        return output ; 
    }
    auto it = l.begin() ;
    output << "list : " ;
    while (it!=l.end())
    {
        output << "(" << (*it).first << "," << (*it).second << ") " ; 
        it++ ;
    }
    output << endl ;
    return output ;
}

int main()
{
    // list <pair<int , int>> l = {{1,3},{2,4}} ;
    list <pair<int,int>> l ;
    int size ;
    cout << "list size : " ;
    cin >> size ;

    for (int i = 0 ; i < size ; i++)
    {
        int n1 , n2 ;
        cout << "enter the numbers : " ;
        cin >> n1 >> n2 ;
        l.push_back({n1,n2}) ; 
    } 

    cout << l ;

    return 0 ;
}