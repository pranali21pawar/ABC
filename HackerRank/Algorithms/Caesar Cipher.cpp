#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,i=0;
    string s;
    cin >> n >> s >> k;
    char a;
    while(i<n){
        if(isalpha(s[i])){
            a = isupper(s[i])?'A':'a';
            s[i] = a + (s[i] - a + k)%26;
        }
        i++;
    }
    cout << s;
    return 0;
}
