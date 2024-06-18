#include<iostream>
using namespace std ;

class sum 
{
    protected :
        int num1 ;
        int num2 ;
    public :
        sum(int a , int b) : num1(a) , num2(b)
        {
            cout << "sum : " << num1 + num2  << endl ;
        }
} ;

class mult : public sum 
{
    int num3 ;
    public :
        mult(int a , int b ) : sum(a,b) , num3(a*b)
        {
            cout << "multiplication : " << num3 << endl ; 
        }
} ;

int main()
{
    mult example(2,3) ;
    return 0 ;
}