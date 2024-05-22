#include<iostream>
using namespace std ;

int main(){
    int a ;
    long b ;
    char c ;
    float d ;
    double e ;
    printf("enter the numbers separated by space: ") ;
    scanf("%i %li %c %f %lf" , &a , &b , &c , &d , &e ) ;
    printf("%i\n%li\n%c\n%.3f\n%.9lf", a , b , c , d , e ) ;

    return 0 ;
}


/*
# theory 

- short :
    - important note :
        Some C++ data types, their format specifiers, and their most common bit widths are as follows:
        - Int ("%d"): 32 Bit integer
        - Long ("%ld"): 64 bit integer
        - Char ("%c"): Character type
        - Float ("%f"): 32 bit real value
        - Double ("%lf"): 64 bit real value
    - scanf :
        - it is a input method.
        - syntax :
            scanf("`format_specifier`", &val)
        - eg.. 
            char ch;
            double d;
            scanf("%c %lf", &ch, &d);
    - printf :
        - it is a output method 
        - syntax :
            printf("`format_specifier`", val) ;
        - eg.. 
            char ch = 'd';
            double d = 234.432;
            printf("%c %lf", ch, d) ;
    - note : in the quotation we indrectly decieding the type as well as output stream also eg..
        printf("%i\n%li\n%c\n%.3f\n%.9lf", a , b , c , d , e ) ;
        .. output :
            1
            2147483647
            f
            1.230
            1.234000000

- hacker rank :

    Some C++ data types, their format specifiers, and their most common bit widths are as follows:

    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
    Reading
    To read a data type, use the following syntax:

    scanf("`format_specifier`", &val)
    For example, to read a character followed by a double:

    char ch;
    double d;
    scanf("%c %lf", &ch, &d);
    For the moment, we can ignore the spacing between format specifiers.

    Printing
    To print a data type, use the following syntax:

    printf("`format_specifier`", val)
    For example, to print a character followed by a double:

    char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d);
    Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.


*/