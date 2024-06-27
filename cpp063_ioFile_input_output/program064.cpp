#include<iostream> 
#include<fstream>
using namespace std ;



int main()
{
    // ofstream out("test.txt") ;
    // out << "hello world" ;
    string data1 , data2 , data3;
    ifstream in("test.txt") ;
    // getline(in , data) ;
    in >> data1 >> data2 >> data3;
    cout << data1 << " " << data2 << " " << data3 << endl ;
    getline(in , data1 ) ;
    cout << data1 << endl ;
    // getline(in , data1 ) ;
    // cout << data1 << endl ;
    
    return 0 ;
}