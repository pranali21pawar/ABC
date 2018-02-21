#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c=0; cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n-1;i++){
        if(i+2 <n && vec[i+2] != 1){
            i++;
        }
        
        c++;
    }
    cout << c ;
    return 0;
}
