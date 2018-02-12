#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q; cin >> q;
    while(q--){
        string s;
        cin >> s;
        int n=s.size(),c=0;
        int arr[26]={0};
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                c++;
            }
       }
        cout << c << endl ;
       
    }
     return 0;
}
