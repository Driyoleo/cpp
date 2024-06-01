#include<iostream>
#include<cmath>
using namespace std ;

class co_ordinate 
{
    private : 
        float abscissa ;
        float ordinate ;
    public :
        co_ordinate(float x , float y) ;        // parametarized constructor
        void display_co_ordinate() ;

        friend float co_dist(co_ordinate o1 , co_ordinate o2) ;
};

co_ordinate :: co_ordinate(float x , float y)
{
    abscissa = x ;
    ordinate = y ;
}

void co_ordinate :: display_co_ordinate()
{
    cout << "your point : (" << abscissa << " , " << ordinate << ")" << endl ;
}

float co_dist(co_ordinate o1 , co_ordinate o2)
{   
    float dist = pow((pow((o1.abscissa - o2.abscissa) , 2) + pow((o1.ordinate - o2.ordinate) , 2)) , 0.5) ;
    return dist ;
}

int main()
{

    cout << "co-ordinate of point ... A" << endl ;

    int x ;
    cout << "abscissa : " ;
    cin >> x ;

    int y ;
    cout << "ordinate : " ;
    cin >> y ;


    co_ordinate a(x ,y) ;           // implicite call
    a.display_co_ordinate() ;

    cout << "co-ordinate of point ... B" << endl ;

    cout << "abscissa : " ;
    cin >> x ;

    cout << "ordinate : " ;
    cin >> y ;

    co_ordinate b = co_ordinate(x , y) ;        // explicite call
    b.display_co_ordinate() ;

    cout << "distance between the two ordinates : " << co_dist(a,b) << endl ;
    return 0 ;
}