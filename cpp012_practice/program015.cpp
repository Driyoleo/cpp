// divisible by 3 

#include<iostream>
using namespace std ;

int main(){
    int num ;
    cout << "enter the number : " ;
    cin >> num ;
    if (num % 3 == 0 ){
        cout << num << " is divisible by 3 " ;
    }
    else {
        cout << num << " is not divisible by 3" ;
    }
    return 0 ;
}

