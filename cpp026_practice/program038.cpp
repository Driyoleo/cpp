/*
Q> Given a string S which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string
   and find the resultant string.
*/

#include<iostream>
using namespace std ;

int main(){
    string str ;
    cout << "enter your string : " ;
    getline(cin , str) ;
    cout << str.length() << endl ;
    cout << "line : " << str << endl ;
    for (int i = 0 ; i < str.length() ; i++){
        int c = 0 ;
        for (int j = 0; j < str.length() ; j++)
        {
            if (str[i] == str[j] ){
                c++ ;
                if (c>1){
                    str.erase(j,1); 
                }
            }
        }

        
    }
    cout << "resultant line : " << str;
     
    return 0 ;
}