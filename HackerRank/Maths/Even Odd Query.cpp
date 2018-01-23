#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q,x,y,i;
    cin>>n;
    long a[n];
    
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cin>>q;
    
    while(q--)
    {
        cin>>x>>y;
        
        if(x>y)
            
            cout<<"Odd"<<endl;
        
        else if(x==y)
                {
                    if(a[x-1]%2==0)
                         cout<<"Even"<<endl;
                    else
                        cout<<"Odd"<<endl;
                 }
        else
        {
           
            if((a[x-1]%2==0)&&(a[x]!=0))
                cout<<"Even"<<endl;
            else
                cout<<"Odd"<<endl;
        }
    }
    
    return 0;
}