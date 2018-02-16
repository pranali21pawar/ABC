#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t ;
    for(int i=0;i<t;i++){
        int n,sumL=0;
        cin >> n ;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
            sumL+=arr[j];
        }
        if(n==1){
            cout << "YES" << endl ;
        }
        else{
            sumL=sumL-arr[n-1];
        int sumR=0;
        for(int k=n-2;k>=0;k--){
            sumL-=arr[k];
            sumR+=arr[k+1];
            if(sumR==sumL){
                cout << "YES" << endl;break; 
            }
            else if(k==0)
                cout << "NO" << endl ;
        }
        }
    }
    return 0;
}
