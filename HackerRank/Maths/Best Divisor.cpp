#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n)
{
    int sum=0;
    while(n>=1)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}   

int main() {
    
    int n;cin>>n;
    int sum,ans,maxi=0;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            sum=solve(i);
            if(maxi<sum)
            {
                maxi=sum;ans=i;
            }
            if(maxi==sum)
            { ans=min(i,ans);}
        }
    }
    cout<<ans<<endl;
}