// recursion

#include<iostream>
using namespace std ;

int sum(int n){
    if (n==1){
        return 1 ;
    }
    return (n+sum(n-1)) ;
}

int main(){
    int num = 10 ;
    cout << "sum of all natural numbers upto num : " << sum(num) ;
    return 0 ;
}


/*
# how it's work :
- sum(num)
- sum(10)
- 10 + sum(9) 
- 10 + 9 + sum(8)
....
- 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + sum(1)
- 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1
- 55

*/