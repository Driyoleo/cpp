#include<iostream>
using namespace std ;

class phone 
{
    string speciality ;
    public :
        void set_data(string speciality) 
        {
            this->speciality = speciality ;
        }

        void get_data()
        {
            cout << "speciality of this phone is : " << speciality << endl ;
        }
} ;

int main()
{
    phone iphone ;
    iphone.set_data("security") ;
    iphone.get_data() ;
    return 0 ;
}