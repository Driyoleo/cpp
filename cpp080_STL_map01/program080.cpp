#include<iostream>
#include<map>
using namespace std ;

ostream& operator<<(ostream& output , map<string , int> d) 
{
    if (d.size() == 0 )
    {
        output << "map : empty" ;
        return output ;
    }
    auto it = d.begin() ;
    output << "map : " ;
    for (int i = 0 ; i < d.size() ; i ++)
    {
        output << (*it).first << " " ;
        it++ ;
    }
    return output ;
}

int main() 
{
    map <string , int> dict1 ;
    map <string , int> dict2 = {{"aryan" , 100} , {"shrilekha" , 87} } ;
    dict1["laura"] = 96 ;
    dict1["stephen"] = 21 ;
    dict1["tony"] = 69 ;
    
    cout << dict1 << endl;
    cout << dict2 << endl;

    return 0 ;
}