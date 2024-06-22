#include<iostream>
using namespace std ;

class student 
{
    private :
        int standard ;
        string name ;
    public :
        void set_data(int st , string s_name)
        {
            standard = st ;
            name = s_name ;
        }

        void get_data() 
        {
            cout << name << " of class " << standard << endl ;
        }
} ;


int main()
{   
    int size ;
    cout << "enter school size : " ;
    cin >> size ;
    student * school = new student[size] ;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "details of student no. " << i+1 << " ," <<endl ;
        int st ;
        string s_name ;
        cout << "standard : " ;
        cin >> st ;
        cout << "student name : " ;
        cin >> s_name ;
        (school+i)->set_data(st,s_name) ;
    } 

    cout << "filled details of students  ," <<endl ;
    for (int i = 0 ; i < size ; i++)
    {
        (school+i)->get_data() ;
    } 


    cout << "done" ;
    return 0 ;
}