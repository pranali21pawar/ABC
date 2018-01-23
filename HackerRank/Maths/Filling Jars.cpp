#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int n,m,a,b,k,sum=0; cin >> n>>m;
    while(m--){
        cin >> a >> b >> k;
        sum+=(b-a+1)*k;
    }
    cout << sum/n;
    return 0;
}
