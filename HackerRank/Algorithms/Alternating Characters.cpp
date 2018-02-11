#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    
    string str ;
    for(int j=0;j<t;j++){
        cin >> str ;
        int count=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==str[i+1])
                count++;
        }
        cout << count << endl ;
    }
    return 0;
}
