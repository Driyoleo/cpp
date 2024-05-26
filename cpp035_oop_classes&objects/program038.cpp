#include<iostream>
using namespace std ;

class employee     // class
{
    private :
        int salary ;
        long long int aadhar_num ;
        string designation ;
    public :
        string name ;
        int age ;
        void getdata() ;
        void setdata(int sal , long long int adnum , string desig) ; 
} ;

void employee :: getdata(){
    cout << "data of ---> " << name << endl ;
    cout << "Age : " << age << endl;
    cout << "Salary : " << salary << endl;
    cout << "Aadhar number : " << aadhar_num << endl;
    cout << "Designation : " << designation << endl;
}

void employee :: setdata(int sal , long long int adnum , string desig){
    cout << "old data --->" << endl ;
    cout << "Salary : " << salary << endl;
    cout << "Aadhar number : " << aadhar_num << endl;
    cout << "Designation : " << designation << endl;
    salary = sal ;
    aadhar_num = adnum ;
    designation = desig ;
    cout << "updated data -->" << endl ;
    cout << "Salary : " << salary << endl;
    cout << "Aadhar number : " << aadhar_num << endl;
    cout << "Designation : " << designation << endl;
}

int main(){
    employee ramesh ; // object
    ramesh.name = "Ramesh Mandal" ;
    ramesh.age = 45 ;
    ramesh.setdata(30000 , 778315792456 , "peon") ;
    ramesh.getdata() ;

    return 0 ;
}