#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,p; cin >> n >> p ;
    cout << (p/2 < (n/2 - p/2)? p/2 : (n/2 - p/2));
    return 0;
}
