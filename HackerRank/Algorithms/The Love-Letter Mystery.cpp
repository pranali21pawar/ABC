
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q,n,c; cin >> q; string s;
    while(q--){
        cin >> s;
        n=s.size();
        c=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                c+= abs(s[i]-s[n-1-i]);
            }
        }
        cout << c << endl;
    }
    return 0;
}
