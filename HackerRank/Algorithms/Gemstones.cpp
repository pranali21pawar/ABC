#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    string str;
    int mask[26]={0};
    
    for(int i=0;i<t;i++){
        cin >> str;
        char ch='a';
            for(int j=0;j<26;j++){
                if(str.find(ch)==string::npos){
                    mask[j]=1;
                }
                ch++;
            }
        
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(mask[i]==0)
        count++;
    }
    cout << count ;
    return 0;
}
