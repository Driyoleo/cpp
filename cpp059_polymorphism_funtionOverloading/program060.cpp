#include<iostream>
using namespace std ;

class number 
{
    private :
        int a , b , c ;
    public :
        void set_number()
        {
            a = b = c = 0 ;
        }
        void set_number(int a)
        {
            this->a = a ;
            b = c = 0 ;
        }
        void set_number(int a , int b )
        {
            this->a = a ;
            this->b = b ;
            c = 0 ;
        }
        void set_number(int a , int b , int c)
        {
            this->a = a ;
            this->b = b ;
            this->c = c ;
        }

        void display()
        {
            cout << "a : " << a << endl ;
            cout << "b : " << b << endl ;
            cout << "c : " << c << endl ;
            cout << endl ;
        }
} ;

int main()
{
    number zero , single , dual , triple ;
    zero.set_number() ;
    zero.display() ;

    single.set_number(1) ;
    single.display() ;

    dual.set_number(1,4) ;
    dual.display() ;

    triple.set_number(4,7,1) ;
    triple.display() ;

    return 0 ;
}