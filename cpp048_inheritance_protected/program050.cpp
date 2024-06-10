#include<iostream>
using namespace std ;

class flying_animal
{
    protected :
        string species_name ;
        int wing_size ;
        int speed ;
        string color ;
    public :
        void display() ;
} ;

void flying_animal :: display()
{
    cout << "species name : " << species_name << endl ;
    cout << "wing size : " << wing_size << endl ;
    cout << "speed : " << speed << endl ;
    cout << "color : " << color << endl ;
}

class bird : public flying_animal
{
    public : 
        bird(string s_name , int wing , int spd , string col)
        {
            species_name = s_name ;
            wing_size = wing ;
            speed = spd ;
            color = col ;
        }
} ;

int main()
{
    bird egale("Egale" , 40 , 180 , "black and white") ;
    egale.display() ;
    return 0 ;
}