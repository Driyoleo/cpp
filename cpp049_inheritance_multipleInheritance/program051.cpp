#include<iostream> 
using namespace std ;

class flying_animal
{
    protected :
        string movement = "wings" ;
} ;

class carnivorus 
{
    protected :
        string food = "other animals";
} ;

class reptile 
{
    protected :
        string animal_type = "reptile" ;
} ;

class bird : flying_animal , carnivorus , reptile 
{
    public :
        void display_properties() ;
} ;

void bird :: display_properties()
{
    cout << "bird is a " << animal_type << endl ;
    cout << "it eats " << food << endl ;
    cout << "it moves with the help of " << movement << endl ;
}

int main()
{
    bird egale ;
    egale.display_properties() ;
    return 0 ;
}