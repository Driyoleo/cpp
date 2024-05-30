#include<iostream>
using namespace std ;



class complex 
{
    private :
        int real ;
        int comp ;
    public :
        void set_complex(int num1 , int num2) ;
        void display_complex() ;

        
        friend class calculator ;

} ;

void complex :: set_complex(int num1 , int num2)
{
    real = num1 ;
    comp = num2 ;
}

void complex :: display_complex()
{
    cout << "the complex number is .. " << real << " + " << comp << "i" << endl ;
}

class calculator 
{
    private :
        int s_real ;
        int s_comp ;
    public :
        void sum_complex(complex o1 , complex o2) ;
} ;

void calculator :: sum_complex(complex o1 , complex o2)
{
    s_real = o1.real + o2.real ;
    s_comp = o1.comp + o2.comp ;
    cout << "the complex number is .. " << s_real << " + " << s_comp << "i" << endl ;
}

int main()
{
    complex o1 , o2 ;
    o1.set_complex(1 , 7) ;
    o2.set_complex(8 , 2) ;
    o1.display_complex() ;
    o2.display_complex() ;

    calculator cal ;
    cal.sum_complex(o1 ,o2) ;
    return 0 ;
}