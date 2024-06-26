#include<iostream>
using namespace std ;

class greeting 
{
    protected :
        string message = "good";
    public :
        virtual void display()
        {
            cout << message << " greeting" << endl ;
        }
} ;

class morning : public greeting 
{
    public :
        void display()
        {
            cout << message << " morning !"  << endl ;
        }
} ;

class night : public greeting
{
    public :
        void display()
        {
            cout << message << " night !" << endl ; 
        }
} ;

int main()
{
    morning wish1 ;
    night wish2 ;
    greeting * ptr[2];
    ptr[0] = &wish1 ;
    ptr[0]->display() ;
    ptr[1] = &wish2;
    ptr[1]->display() ;
    return 0 ;
}