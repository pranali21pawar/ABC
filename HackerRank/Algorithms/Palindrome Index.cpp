#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q,n,c; cin >> q; string s;
    while(q--){
        cin >> s;
        n=s.size();
        c=-1;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                if(s[i+1]==s[n-1-i] &&(s[i+2]==s[n-1-i-1])){
                    c=i;
                    break;
                }
                else if((s[i]==s[n-1-i-1])&&(s[i+1]==s[n-1-i-2])){
                    c=n-1-i;
                    break;
                }
                
                    
            }
        }
        cout << c << endl;
    }
    return 0;
}
