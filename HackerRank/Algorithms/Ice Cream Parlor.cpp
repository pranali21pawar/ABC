#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> m >> n ;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[j]+arr[k]==m){
                    cout << j+1 << " " << k+1 << endl ;
                }
            }
        }
    }
    return 0;
}
