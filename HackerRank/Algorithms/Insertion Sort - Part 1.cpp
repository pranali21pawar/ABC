#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <array> 
using namespace std;

int main(void) {
    int n,i,j,key;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int check = 1 ;
    for(i=n-1; i>=0&&check==1;i--)
    {
      key = a[i];
      j = i;
      while(j>0 && key < a[j-1])
      {
        a[j] = a[j-1];
        j--;
        for(int k=0;k<n;k++){
            cout << a[k] << " ";
        }
        cout << endl ;
      }
      a[j] = key;
      for(int k=0;k<n;k++){
            cout << a[k] << " ";
        }
        cout << endl ;
        
        check=0;
        for ( int m = 0 ;m < n;m++ ){
            if ( a[ m ] > a[ m+1 ] )
                check = 1 ;
        }
    }
}
