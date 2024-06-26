#include<iostream>
using namespace std ;

class person 
{
    protected :
        int num1 , num2 ;
        string personality ;
    public :
        void set_data(int n1 , int n2)
        {
            num1 = n1 ;
            num2 = n2 ;
        }
        virtual int work() = 0 ;       // this is do noyhing function or
        virtual void display() = 0 ;    // pure virtual funtion 
} ;

class multiplier : public person
{
    public :
        int work()
        {
            return num1*num2 ;
        }

        void display()
        {
            cout << "i am a multiplier , " << endl ;
            cout << num1 << " * " << num2 << " = " << work() << endl ; 
        }
};
class adder : public person
{
    public :
        int work()
        {
            return num1+num2 ;
        }

        void display()
        {
            cout << "i am a adder , " << endl ;
            cout << num1 << " + " << num2 << " = " << work() << endl ; 
        }
};


int main()
{
    person * ptr[2] ;

    multiplier person1 ;
    adder person2 ;

    ptr[0] = &person1 ;
    ptr[0]->set_data(4,2) ;
    ptr[0]->display() ;

    ptr[1] = &person2 ;
    ptr[1]->set_data(4,2) ;
    ptr[1]->display() ;

    return 0 ;
}