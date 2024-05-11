//  oinperator

#include<iostream>
using namespace std ;

int main(){
    int a = 6 ;
    int b  = 2 ;
    cout << " a = 6 and b = 2 " << endl ;

    cout << "Arithmatic operators" << endl ;
    cout << "a + b = " << (a+b) << endl ;
    cout << "a - b = " << (a-b) << endl ;
    cout << "a / b = " << (a/b) << endl ;
    cout << "a * b = " << (a*b) << endl ;
    cout << "a % b = " << (a%b) << endl ;
    cout << "a++ = " << a++ << endl ; // it means first return initial value of a then do a+1 ..
    cout << "a-- = " << a-- << endl ; // it means first return initial value of a then do a-1 ..
    cout << "++a = " << ++a << endl ; // it means first do a+1 then return value of a ..
    cout << "--a = " << --a << endl ; // it means first do a+1 then return value of a ..

    cout << "relational operators" << endl ; // return value in 1 or 0  ..  true for 1  and  false for 0 
    cout << "a > b = " << (a>b) << endl ;
    cout << "a < b = " << (a<b) << endl ;
    cout << "a >= b = " << (a>=b) << endl ;
    cout << "a <= b = " << (a<=b) << endl ;
    cout << "a == b = " << (a==b) << endl ;
    cout << "a != b = " << (a!=b) << endl ;

    cout << "logical operators" << endl ; // return value in 1 or 0 .. true for 1 and false for 0 
    cout << "(a>b) && (a<b) = " << ((a>b) && (a<b)) << endl ;
    cout << "(a>b) || (a<b) = " << ((a>b) || (a<b)) << endl ;
    cout << "!(a>b) = " << !(a>b) << endl ;

    cout << "assignment operators" << endl ; // here assignment operators returns the present value of variable
    cout << " a = 3 " << " now  a = " << (a = 3) << endl ;
    cout << " a += 3 " << " now  a = " << (a += 3) << endl ;
    cout << " a -= 3 " << " now  a = " << (a -= 3) << endl ;
    cout << " a *= 3 " << " now  a = " << (a *= 3) << endl ;
    cout << " a /= 3 " << " now  a = " << (a /= 3) << endl ;
    cout << " a %= 3 " << " now  a = " << (a %= 3) << endl ;

    // later i will do the bitwise operators 
    return 0 ;
}