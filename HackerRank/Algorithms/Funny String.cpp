#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;cin >> q;
    while(q--){
        string s;
        cin >> s;
        int n=s.size();
        int i=1,j=n-1,flag=0;
        while(i<n && j>0){
            if(abs(s[i]-s[i-1])!=abs(s[j]-s[j-1])){
                flag=1;
                break;
            }
            else{
                i++;j--;
            }
        }
        if(flag){
            cout << "Not Funny"<< endl;
        }
        else{
            cout << "Funny"<< endl;
        }
    }
    return 0;
}
