/*
Q> Given string str. The task is to find the maximum occurring character in the string str.
*/


#include<iostream>
using namespace std ;

int main(){
    string str = "hi i am a mad manaaa" ;
    char maxchar ;
    int max = 0 ;
    for ( char i : str)
    {
        int count =  0 ;
        for ( char j : str)
        {
            if (i==j){
                count++;
            }
        }
        if (max<count){
            max = count ;
            maxchar = i ;
        }
    }
    cout <<  "\"" << maxchar << "\"" << " occured max time : " << max ;
    
    return 0 ;
}