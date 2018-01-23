#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long x = n/2;
        if(n%2!=0)
            x++;
        cout << x*(n/2) << endl;
    }
    return 0;
}