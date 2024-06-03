#include<iostream>
using namespace std;


int main(){
    int t;
    cout << "enter t : " ;
    cin >> t;
    if (t>=1 && t<=100000)
    {        
        for(int a0 = 0; a0 < t; a0++)
        {
            int n;
            cout << "enter n : " ;
            cin >> n;
            n-- ;
            long long int  sum = 0 ;
            long long int n3 , n5 , n15 , l3 , l5 , l15 ;
            
            if ((n+1)>3) {            
                l3 = n - (n%3) ;
                n3 = l3/3 ;
                sum = sum + 3 * ((n3*(n3+1))/2) ;
            }

            if ((n+1)>5){                
                l5 = n - (n%5) ; 
                n5 = l5/5 ;
                sum = sum + 5 * ((n5*(n5+1))/2) ;
            }
            


            if ((n+1)>15)
            {
                l15 = n - (n%15) ;
                n15 = l15/15 ;
                sum = sum - 15* ((n15*(n15+1))/2) ;
            }

            cout << sum << endl ;
        }
    }
    return 0;
}
