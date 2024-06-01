#include<iostream>
using namespace std ;

class point 
{
    private :
        int x ;
        int y ;
    public :
        point(int num1 , int num2) ;
        point() ;
        void display() ;
} ;

point :: point(int num1, int num2)
{
    x = num1 ;
    y = num2 ;
}

point :: point()
{
    x = 0 ;
    y = 0 ;
}

void point :: display() 
{
    cout << "your point : (" << x << " , " << y << ")" << endl ; 
}

int main()
{
    point a(1,4) ;
    a.display() ;

    point b ;
    b.display() ;
    return 0 ;
}