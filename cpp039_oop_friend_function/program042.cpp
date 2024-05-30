#include<iostream>
using namespace std ;

class complex 
{
    private :
        int rational ;
        int irrational ;

    public :
        void set_complex(int num1 , int num2) ;
        void set_display() ;

        friend complex sum_complex(complex o1 , complex o2) ; 
} ;

void complex :: set_complex(int num1 , int num2) 
{
    rational = num1 ;
    irrational = num2 ;
}

void complex :: set_display()
{
    cout << "the complex number is .. " << rational << " + " << irrational << "i" << endl ;
}

complex sum_complex(complex o1 , complex o2)
{
    complex o3 ;
    o3.rational = o1.rational + o2.rational ;
    o3.irrational = o1.irrational + o2.irrational ;
    return o3 ;
}
int main()
{
    complex comp1 , comp2 , comp3 ;
    comp1.set_complex(2 , 5) ;
    comp1.set_display() ;

    comp2.set_complex(6,1) ;
    comp2.set_display() ;

    comp3 = sum_complex(comp1 , comp2) ;
    comp3.set_display() ;
    return 0 ;
}

