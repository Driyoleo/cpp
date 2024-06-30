#include<iostream>
using namespace std ;

class student {
    string name ;
    public :
        student(string name)
        {
            this->name = name ;
        }
} ;

template <class T>
void func(T data)
{
    cout << "it is not a class" << endl ;
}

void func(student s)
{
    cout << "it is a object of student class" << endl ;
}

int main()
{
    student arogya("arogya") ;
    func(2) ;
    func(2.56f) ;
    func(4.09) ;
    func(arogya) ; 
    return 0 ;
}