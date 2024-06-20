#include<iostream>
using namespace std ;

class complex 
{
    private :
        int real ;
        int imaginary ;
    public :
        complex(int a  , int b)
        {
            real = a ;
            imaginary = b ;
        }
        void print_data()
        {
            cout << "complex number : " << real << " + " << imaginary << "i" << endl ; 
        }
} ;

int main()
{
    complex * ptr = new complex(1,2) ;
    (*ptr).print_data() ;
    ptr->print_data() ;     // use of arrow operator 
    return 0 ;
}