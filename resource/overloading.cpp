// overloading of operator & ostream

#include<iostream>
using namespace std ;

class human 
{
    private :
        string name ;
        int height ;
    public :
        human(string n , int h) ;

        friend bool operator< (human const &H1 , human const &H2) ;
        friend bool operator> (human const &H1 , human const &H2) ;
        friend bool operator== (human const &H1 , human const &H2) ;

        friend int operator+ (human const &H1 , human const &H2) ;
        friend int operator- (human const &H1 , human const &H2) ;
        friend int operator* (human const &H1 , human const &H2) ;
        friend int operator/ (human const &H1 , human const &H2) ;

        friend ostream& operator<< (ostream &output , human const &H) ;
} ;

human :: human(string n ,int h)
{
    name = n ;
    height = h ;
}

bool operator< (human const &H1 , human const &H2)
{
    if (H1.height<H2.height)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}
bool operator> (human const &H1 , human const &H2)
{
    if (H1.height>H2.height)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}
bool operator== (human const &H1 , human const &H2)
{
    if (H1.height==H2.height)
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}

int operator+ (human const &H1 , human const &H2)
{
    return (H1.height + H2.height) ;
}
int operator- (human const &H1 , human const &H2)
{
    return (H1.height - H2.height) ;
}
int operator* (human const &H1 , human const &H2)
{
    return (H1.height * H2.height) ;
}
int operator/ (human const &H1 , human const &H2)
{
    return (H1.height / H2.height) ;
}

ostream& operator<< (ostream &output , human const &H)
{
    output << "height of " << H.name << " is " << H.height ;
    return output ;
}



int main()
{
    human rahul("rahul" , 12 ) , shita("shita" , 6 ) ;
    cout << rahul << endl ;
    cout << shita << endl ;
    cout << "rahul < shita : " << (rahul<shita) << endl ; 
    cout << "rahul > shita : " << (rahul>shita) << endl ; 
    cout << "rahul == shita : " << (rahul==shita) << endl ; 
    cout << "rahul + shita : " << (rahul+shita) << endl ; 
    cout << "rahul - shita : " << (rahul-shita) << endl ; 
    cout << "rahul * shita : " << (rahul*shita) << endl ; 
    cout << "rahul / shita : " << (rahul/shita) << endl ; 
    return 0 ;
}
