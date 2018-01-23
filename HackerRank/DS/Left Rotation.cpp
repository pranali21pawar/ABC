#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n,0);
    k=k%n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[(i+n-k)%n]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
