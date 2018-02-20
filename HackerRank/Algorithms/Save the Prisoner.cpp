#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int n,m,s;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> n >> m >> s ;
        if((m+s-1)%n==0)
        cout << n << endl ;
        else
        cout << (m+s-1)%n << endl ;
    }
    return 0;
}
