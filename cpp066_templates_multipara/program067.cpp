#include<iostream>
using namespace std ;

template <class T1 = int , class T2 = int , class T3= int >
class vector
{
    private :
        T1 x ;
        T2 y ;
        T3 z ;
    public :
        vector(T1 n1 , T2 n2 , T3 n3)
        {
            x = n1 ;
            y = n2 ;
            z = n3 ;
        }

        T1 i()
        {
            return x ;
        }
        T2 j()
        {
            return y ;
        }
        T3 k()
        {
            return z ;
        }

        T1 dotproduct(vector<> v)
        {
            T1 sum = x * v.i() + y * v.j() + z * v.k() ;
            return sum ;
        }
} ;

ostream& operator<< (ostream& output , vector<> v)
{
    output << "(" << v.i() << " , " << v.j() << " , " << v.k() << ")" ;
    return output ;
}

int main()
{
    vector<> v1(1,2,5) ;
    vector<> v2(2,0,1) ;
    cout << "dot product of " << v1 << " and " << v2 << " : " << (v1.dotproduct(v2)) << endl ;
    return 0; 
}