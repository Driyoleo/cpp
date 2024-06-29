#include<iostream>
using namespace std ;

template <class T> 
class number 
{
    private :
        T num ;
    public :
        number(T n) 
        {
            num = n ;
        }

        void display()
        {
            cout << "number : " << num << endl ;
        }
} ;

template <class T>
class person
{
private:
    T name ;
public:
    person(T n)
    {
        name = n ;
    }
    void display()
    {
        cout << "name : " << name << endl ;
    }
};



int main()
{
    number <float> n1(2.4) ;
    number <int> n2(2.4) ;
    number <string> n3("2 (is a string)") ;
    n1.display() ;
    n2.display() ;
    n3.display() ;

    person <string> p1("arina") ;
    p1.display() ;
    return 0 ;
}

