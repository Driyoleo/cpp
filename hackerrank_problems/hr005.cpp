#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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
            int sum = 0 ;
            int i = 0 ;
            while (i<n)
            {
                int x , y ;
                x = 3*i ;
                y = 5*i ;
                if ( x>n && y>n )
                {
                    break;
                }
                if (x<n)
                {
                    sum+=3*i ;
                }
                if ((y < n) && (i%3!=0))
                {
                    sum+=5*i ;
                }
                i++ ;
            }
            cout << sum << endl ;
        }
    }
    return 0;
}