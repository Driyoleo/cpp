// structure 

#include<iostream>
using namespace std ;

struct student
{
    int age ;
    char grade ;
};

// use of typedef
typedef struct teacher
{
    int age ;
    char section ;
} th ;

int main(){
    struct student abhinav ;
    abhinav.age = 12 ;
    abhinav.grade = 'A' ;
    cout << "age is "<< abhinav.age << " and grade is " << abhinav.grade << " of abhinav given ." << endl;
    
    // use of typedef
    th sujit ;
    sujit.age = 56 ;
    cout << sujit.age ;
    return 0 ;
}
