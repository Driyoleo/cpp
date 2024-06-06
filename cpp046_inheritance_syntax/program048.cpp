#include<iostream>
using namespace std ;

// base class 
class mamals 
{
    public :
        string birth = "baby" ;
        string species_name ;
        string baby_name ;
        int number ;
} ;



class cat : public mamals 
{
    public :
        void display_details() 
        {
            cout << species_name << " gives " << number << " " << birth << " " << baby_name << endl ;
        }
        cat(string s_name , string name , int n)
        {
            species_name = s_name ;
            baby_name = name ;
            number = n ;
        }

} ;




int main(){
    cat persian_cat("persian" , "kiiten" , 4 ) ;
    persian_cat.display_details() ;
    cout << persian_cat.species_name ;
    return 0 ;
}