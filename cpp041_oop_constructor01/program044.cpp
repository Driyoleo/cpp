#include<iostream>
using namespace std ;

class animal 
{
    private :
        string name ;
        string sound ;
    public :
        animal() ;      // constructor
        void display() ;
} ;

animal :: animal()
{
    cout << "animal species name (don't use space in between) : " ;
    cin >> name ;
    cout << "sound of " << name << " : " ;
    cin >> sound ;
}

void animal :: display()
{
    cout << "animal name is " << name << " and its sound is .. " << sound  << endl ;  
}

int main(){
    animal dog ;
    dog.display() ;
    return 0 ;
}

/*
# output
    animal species name (don't use space in between) : dog
    sound of dog : bark
    animal name is dog and its sound is .. bark
*/