#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q,n,c; cin >> q; string s;
    while(q--){
        cin >> s;
        n=s.size();
        if(n%2!=0){
            cout << "-1" << endl;
        }
        else{
            int i=0;
            c=0;
            int arr[26]={0};
            for(i=0;i<n/2;i++){
                arr[s[i]-'a']++;
            }
            for(i=n/2;i<n;i++){
                arr[s[i]-'a']--;
            }
            for(i=0;i<26;i++){
                if(arr[i]>0){
                    c+=arr[i];
                }
            }
            cout << c <<endl;
        }
        
    }
    return 0;
}
