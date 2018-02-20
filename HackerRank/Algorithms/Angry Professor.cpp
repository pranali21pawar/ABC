#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q; cin>>q;
    while(q--){
        int n,k,c=0,x; cin >> n >> k;
        while(n--){
            cin >> x;
            if(x<1) c++;
        }
        if(c>=k) cout << "NO"<< endl;
        else cout << "YES"<< endl;
    }
    return 0;
}
