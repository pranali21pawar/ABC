#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1,s2; cin >> s1 >> s2;
        int arr[26]={0};
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            arr[s2[i]-'a']--;
        }
    int result=0;
        for(int i=0;i<26;i++){
            result+=abs(arr[i]);
        }
        cout << result << endl;
    return 0;
}
