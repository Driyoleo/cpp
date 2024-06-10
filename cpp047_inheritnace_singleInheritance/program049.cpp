#include<iostream>
using namespace std ;

class flying_animal 
{
    private :
        int wing_size ;
        int speed ;
        string color ;
    
    public :
        void setdata(int wing , int spd , string col ) ;
        // fllying_animal(){} ;
        int get_wing() ;
        int get_speed() ;
        string get_color() ;
} ;

void flying_animal :: setdata(int wing  , int spd , string col)
{
    wing_size = wing ;
    speed = spd ;
    color = col ;
}

int flying_animal :: get_wing()
{
    return wing_size ;
}

int flying_animal :: get_speed()
{
    return speed ;
}

string flying_animal :: get_color()
{
    return color ;
}

class bird : private flying_animal 
{
    private :
        string bird_name ;
    public :
        bird(string bname , int bwing , int bspeed , string bcolor) ;
        void display(){
            cout << "bird name : " << bird_name << endl ;
            cout << "wing size : " << get_wing() << endl ;
            cout << "speed : " << get_speed() << endl ;
            cout << "color : " << get_color() << endl ;
        }
} ;

bird :: bird(string bname , int bwing , int bspeed , string bcolor)
{
    bird_name = bname ;
    setdata(bwing , bspeed , bcolor) ;
}


int main()
{
    bird pegion("pegion" , 4 , 20 , "white") ;
    pegion.display() ;
    return 0 ;
}