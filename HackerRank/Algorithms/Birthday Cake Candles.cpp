#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,x,h;
    cin >> n ;
    vector <long long int> vec;
    for(long long int i=0;i<n;i++){
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    h=vec[n-1];
    x=0;
    for(long long int i=0;i<n;i++){
        if(vec[i]==h){
            x++;
        }
    }
    cout << x;
    return 0;
}
