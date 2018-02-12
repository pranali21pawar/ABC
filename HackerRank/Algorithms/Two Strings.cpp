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
        string s1,s2,result="NO"; cin >> s1 >> s2;
        int arr[26]={0};
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            if(arr[s2[i]-'a']>0){
                result = "YES";
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}
