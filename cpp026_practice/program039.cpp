/*
Q> Remove characters from the first string which are present in the second string
*/

#include<iostream>
using namespace std ;

int main(){
    string str1 ;
    string str2 ;
    cout << "enter first string : " ;
    getline(cin , str1) ;
    cout << "enter second string : " ;
    getline(cin , str2 ) ;
    for (int i=0 ; i < str1.length() ; i++ ){
        for (char j : str2 ){
            if (str1[i] == j){
                str1.erase(i,1);
            }
        }
    }
    cout << "resultant line : " << str1 ;
    return 0 ;
}