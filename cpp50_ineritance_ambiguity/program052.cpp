#include<iostream>
using namespace std ;

class father 
{
    protected :
        string nose = "long nose" ;
        string hair = "curly hair" ;
    public :
        string brain_status()
        {
            return "intelligent" ;
        } 
        string fav_color() 
        {
            return "white" ;
        }
} ;

class mother 
{
    protected :
        string nose = "short nose" ;
        string hair = "straight hair" ;
    public :
        string brain_status()
        {
            return "intermediate" ;
        } 
        string fav_color() 
        {
            return "pink" ;
        }

} ;

class child : public father , public mother 
{
    protected :
        string nose = father :: nose ;
        string hair = mother :: hair ;
    public :
        string brain_status()
        {
            return father :: brain_status() ;
        } 
        string fav_color()
        {
            return "black" ;
        }
        void display() 
        {
            cout << "nose : " << nose << endl;
            cout << "hair : " << hair << endl;
            cout << "brain status : " << brain_status() << endl; 
            cout << "favourite  color : " << fav_color() << endl;
        }
} ;

int main()
{
    child rohan ;
    rohan.display() ;
    return 0 ;
}