#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
    int k;
    cin >> n >> k;
    if(k>=n/2){
        cout<<2*(n-k-1)<<endl;
    }else{
        cout<<2*k+1<<endl;
    }
    }
    return 0;
}
