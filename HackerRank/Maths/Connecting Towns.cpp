#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; cin >> t;
    while(t--){
        int x; cin >> x ; x--;
        int ans=1;
        while(x--){
            int y;cin >> y;
            ans*=y; ans= ans%1234567 ;
        }
        cout << ans << endl ;
    }
    return 0;
}
