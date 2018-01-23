#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n;cin>>n;
    
    vector<string> vec;
    for(int i=0;i<n;i++){
        string str;cin>>str;
        vec.push_back(str);
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        string str ;
        cin >> str;
        int count=0;
        for(int j=0;j<n;j++){
            if(vec[j]==str)
                count++;
        }
        cout << count << endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
