#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin>>n;
    if(n>=2 && n<=1000000)
    {
        char S[n];
        int sea_level=0, Ans=0;
        for(unsigned int i=0; i<n; ++i)
        {
            cin>>S[i]; 
            if(S[i]=='U')
                ++sea_level;
            if(S[i]=='D')
                --sea_level;
            if(sea_level==0 && S[i]=='U')
                ++Ans;
        }
    cout<<Ans<<endl;
    }
    return 0;
}