#include <bits/stdc++.h>

using namespace std;

void bonAppetit(int n, int k, int b, vector <int> ar) {
    int sum=0;
    // Complete this function
    for(int j=0;j<n;j++)
        {
        sum+=ar[j];
    }
    
    
    sum=sum-ar[k];
    sum=sum/2;
    int diff=b-sum;
    if(b>sum)
        {
      cout<<diff;
    }
    else
        {
        cout<<"Bon Appetit";
    }
    return;
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    
    int b;
    cin >> b;
    
   bonAppetit(n, k, b, ar);
    
    return 0;
}
