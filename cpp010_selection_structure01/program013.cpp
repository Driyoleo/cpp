// if-else example ..
/*
Q > make a grade system on marks with selection structure
    100 - 91 : A1
     90 - 81 : A2
     80 - 71 : B1
     70 - 61 : B2
     60 - 51 : C1
     50 - 41 : C2
     40 - 33 : D
     33 -  0 : E (Fail)
*/

#include<iostream>
using namespace std ;

int main(){
    int marks ;
    cout << " enter your total marks : " ;
    cin >> marks ;

    if (marks > 90){
        cout << "your grade  is A1 , you are promoted to next class" << endl ;
    }
    else if (marks > 80){
        cout << "your grade  is A2 , you are promoted to next class" << endl ;
    }
    else if (marks > 70){
        cout << "your grade  is B1 , you are promoted to next class" << endl ;
    }
    else if (marks > 60){
        cout << "your grade  is B2 , you are promoted to next class" << endl ;
    }
    else if (marks > 50){
        cout << "your grade  is C1 , you are promoted to next class" << endl ;
    }
    else if (marks > 40){
        cout << "your grade  is C2 , you are promoted to next class" << endl ;
    }
    else if (marks > 32){
        cout << "your grade  is D , you are promoted to next class" << endl ;
    }
    else if (marks > 0){
        cout << "your grade  is E , you are failed" << endl ;
    }
    else {
        cout << "invalid input " ;
    }

    return 0 ;
}