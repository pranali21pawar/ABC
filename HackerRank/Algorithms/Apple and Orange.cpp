#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int s, t, a, b, m, n;
    cin>>s>>t>>a>>b>>m>>n;
    long long int d,i,j,x,y;
    int count=0;
    for (i=0;i<m;i++)
    {
        cin>>d;
        x=(a+d);
        if (x>=s&&x<=t)
            count++;           
    }
    cout<<count;count=0;
    for(j=0;j<n;j++)
    {
        cin>>d;
        y=(b+d);
        if (y>=s && y<=t)
            count++;
    }
    cout<<endl<<count;
    return 0;
}
