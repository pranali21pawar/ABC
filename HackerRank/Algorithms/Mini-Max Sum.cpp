#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int x,sum=0;
    vector <long long int> vec;
    for(int i=0;i<5;i++){
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<4;i++){
        sum+=vec[i];
        
    }
    cout << sum  << " " << sum-vec[0]+vec[4];
    return 0;
}
