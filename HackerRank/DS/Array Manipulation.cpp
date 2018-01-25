#include <bits/stdc++.h>

using namespace std;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,m,p,q,k,i,j,max=0,x=0;

    cin>>n>>m;
    long int *a=new long int[n+1]();

    for(i=0;i<m;i++)
    {
        cin>>p>>q>>k;
        a[p]+=k;
        if((q+1)<=n) a[q+1]-=k;
    }

    for(i=1;i<=n;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}