#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int n,int m)
{
    if((n>=m)&&((n%m)==0))
        return(m);
    else
        return gcd(m,(n%m));
    
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; cin >> t;
    while(t--){
        int x1,x2,y1,y2; cin >> x1 >>x2>>y1>>y2;
        
        
        cout << gcd(abs(y2-y1),abs(x2-x1))-1 << endl;
    }

    return 0;
}
