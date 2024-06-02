#include<iostream>
using namespace std ;

class bomb
{
    private :
        static int bomb_num ;

    public :
        bomb() ;
        ~bomb() ;
} ;

int bomb :: bomb_num = 0 ;

bomb :: bomb()
{
    bomb_num++ ;
    cout << "bomb " << bomb_num << " planted" << endl ;
}

bomb :: ~bomb()
{
    cout << "bomb " << bomb_num << " destroyed" << endl ;
    bomb_num-- ;
}

int main()
{
    cout << "entering main" << endl ;
    bomb b1 ;
    {
        cout << "entering block" << endl ;
        bomb b2 ;
    }
    cout << "exited block" << endl ;
    cout << "just exiting main" << endl ;
    return 0 ;
}

/*
# output : 
    entering main
    bomb 1 planted
    entering block
    bomb 2 planted
    bomb 2 destroyed
    exited block
    just exiting main
    bomb 1 destroyed   
*/