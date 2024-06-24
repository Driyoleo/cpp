#include<iostream>
using namespace std;

class integer
{
    public :
        int num ;
        integer(int num)
        {
            this->num = num ;
        }
} ;

int operator+(integer num1 , integer num2 )
{
    int sum = num1.num + num2.num ;
    return sum ;
}

ostream& operator<< (ostream & output , integer n)
{
    output << n.num ;
    return output ;
}

string operator< (integer num1 , integer num2) 
{
    if (num1.num < num2.num)
    {
        return "true" ;
    } 
    return "false" ;
}

int operator^ (integer num1 , integer num2 )
{
    for (int i = 2 ; i <= num2.num ; i++)
    {
        num1.num *= num1.num ;
    }
    return num1.num ;
}

int main()
{
    integer num1(2) , num2(4) ;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl ;
    cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl ;
    cout << num1 << " ^ " << num2 << " = " << (num1^num2) << endl ;

    
    return 0 ;
}