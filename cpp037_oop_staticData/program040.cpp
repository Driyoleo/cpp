// static member and methods

#include<iostream>
using namespace std ;

class student
{
    private :
        static int count ;
        string first_name ;
        string last_name ;
        int age ;
    public :
        void set_add() ;
        static void set_display() ;
};

int student :: count = 0 ;

void student :: set_add()
{
    cout << "data of student number .. " << count+1 << endl ;
    cout << "enter the first name : " ;
    cin >> first_name ;
    cout << "enter the second name : " ;
    cin >> last_name ;
    count++ ;
}

void student :: set_display()
{
    cout << "total numbers students : " << count << endl ;
}

int main(){
    student raj , vikash , shardul ;
    raj.set_add() ;
    vikash.set_add() ;
    shardul.set_add() ;
    student :: set_display() ;

    return 0 ;
}