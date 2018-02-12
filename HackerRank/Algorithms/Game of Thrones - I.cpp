#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,res="YES";
    cin >> s;
    int flag=0,n=s.size();
    int arr[26]={0};
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
    for(int i=0;i<26;i++){
        if(arr[i]%2==0){
            
        }
            else if(arr[i]%2!=0 && n%2!=0 && flag==0){
                flag=1;
            }
            else{
                res="NO";
            }
        }
    cout << res ;
    return 0;
}
