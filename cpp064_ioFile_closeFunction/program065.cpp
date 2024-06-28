#include<iostream>
#include<fstream>
using namespace std ;

int main()
{
    // writing the file ...
    ofstream out("test.txt") ;
    int n ;
    cout << "enter the number of data : " ;
    cin >> n ;
    string data ;
    for (int i = 0 ; i < n ; i++) 
    {
        cout << "data number .. " << i+1 << endl ; 
        string fname , lname , age , interest ;
        cout << "enter first name : " ;
        cin >> fname ;
        cout << "enter last name : " ;
        cin >> lname ;
        cout << "enter age : " ;
        cin >> age ;
        cout << "enter interest : " ;
        cin >> interest ;
        data = data + fname + " " + lname + " " + age + " " + interest + "\n" ;
    }
    out << data ;
    out.close() ; 

    // reading the file 
    ifstream in("test.txt") ;
    for (int i = 0 ; i < 2 ; i++)
    {
        cout << "data number .. " << i+1 << endl;
        string fname , lname , age , interest ;
        in >> fname >> lname >> age >> interest ;
        cout << "name : "  + fname + " " + lname << endl ;
        cout << "age : " <<age<< endl ;
        cout << "interest : " <<interest<< endl ;
    }
    in.close() ;

    return 0 ;
}