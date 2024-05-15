/*
Q> Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 6, 3, 7, 8};
    int len = sizeof(arr) / 4;
    for (int j = 1; j <= len; j++){
        int c = 0 ;
        for (int i : arr){
            if (i == j){
                c++ ;
            }
        }
        if (c<1){
            cout << "missing number : " << j ;
            break;
        }
    }
    return 0;
}