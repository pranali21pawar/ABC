#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    int count=n,k=0;
    while(count){
        cout << count << endl ;
        int red = arr[k];
        for(int i=k;i<n;i++){
            arr[i]-=red ;
            if(arr[i]==0){
                count--;k++;
            }
        }
    }
    return 0;
}
