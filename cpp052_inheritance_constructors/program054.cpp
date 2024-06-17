#include<iostream>
using namespace std ;

class A
{
    protected :
        int a ;
    public :
        A()
        {
            cout << "constructor of A is called " << endl ;
        }
        A(int num)
        {
            a = num ;
            cout << "constuctor of A is called with " << a << " as argument " << endl ;
        }
} ;

class B
{
    protected :
        int b ;
    public :
        B()
        {
            cout << "constructor of B is called " << endl ;
        }
        B(int num)
        {
            b = num ;
            cout << "constuctor of B is called with " << b << " as argument " << endl ;
        }
} ;

class D1 : public A , public B
{
    protected :
        int d ;
    public :
        D1()
        {
            cout << "constructor of D is called " << endl ;
        }
        D1(int num1 , int num2 , int num3) : A(num1) , B(num2)
        {
            d = num3 ;
            cout << "constuctor of D is called with " << d << " as argument " << endl ;
        }
} ;

class D2 : public A , virtual public B
{
    protected :
        int d ;
    public :
        D2()
        {
            cout << "constructor of D is called " << endl ;
        }
        D2(int num1 , int num2 , int num3) : A(num1) , B(num2)
        {
            d = num3 ;
            cout << "constuctor of D is called with " << d << " as argument " << endl ;
        }
} ;



int main()
{
    D1 eg1;
    cout << endl ;
    D1 eg2(1,2,3) ;
    cout << endl ;
    D2 eg3(1,2,3) ;
    

    return 0 ;
}