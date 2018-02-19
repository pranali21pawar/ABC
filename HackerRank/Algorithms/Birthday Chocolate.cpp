#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m, count =0;
    cin >> d >> m;
    
    int sum[105];
    sum[0]=0;
    for(int i=0;i<n;i++)sum[i+1]=sum[i]+s[i];
    for(int i=0;i<=n-m;i++){
        if(sum[i+m]-sum[i]==d){
            count++;
        }
    }
     cout << count ;
    return 0;
   
}
