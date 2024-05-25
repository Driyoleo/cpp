#include<iostream>
using namespace std ;

inline int add(int a , int b ){
    return (a+b) ;
}

int multiply(int a , int b = 1) {
    return a*b ;
}

int main(){
    int a = 4 ;
    int b = 3 ;
    int sum = add(a,b) ;
    cout << "sum : " << sum << endl ;

    cout << "use of static :" << endl ;
    for (int i = 1 ; i <= 10 ; i++){
        static int total = i*10 ;
        cout << total << " " << i << endl ;
    }

    cout << multiply(4) << endl ;
    return 0 ;
}