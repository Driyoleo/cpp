#include<iostream>
using namespace std ;

int main(){
    int n1 , n2 , n3 ;
    cout << "give your number as (eg. 1 2 7) : " ;
    cin >> n1 >> n2 >> n3 ;
    int sum = n1 + n2 + n3 ;
    cout << sum ;
    return 0 ;
}

/*
# theory 

- short :
    - if input is "hi 2" 
    - and we do..  cin >> str >> num ; .. where str is a string and num is int
    - thus cin takes input in space separted value form like ... "hi" then 2 

- by hacker rank :

    In this challenge, we practice reading input from stdin and printing output to stdout.

    In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

    string s;
    int n;
    and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

    cin >> s >> n;
    This reads the first word ("High") from stdin and saves it as string , then reads the second word ("") from stdin and saves it as integer . If we want to print these values to stdout, separated by a space, we write the following code:

    cout << s << " " << n << endl;
    This code prints the contents of string , a single space (), then the integer . We end our line of output with a newline using endl. This results in the following output:

    High 5
*/


