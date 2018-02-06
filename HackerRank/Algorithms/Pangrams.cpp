#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    string line;
    int x ;
    int str[26] = {0};
    getline(cin,line);
    for(int i=0;line[i]!='\0';i++){
        if(isalpha(line[i])){
            if(isupper(line[i]))
            x=line[i]-65;
            else
            x=line[i]-97;
            str[x]=1;
        }
    }
    
    x=1;
    for(int i=0;i<26;i++){
        if(str[i]==0)
            x=0;
    }
    if(x==0) cout << "not pangram";
    else cout << "pangram" ;
    
    return 0;
}
