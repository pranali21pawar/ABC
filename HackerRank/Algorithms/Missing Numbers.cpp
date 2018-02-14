#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n ;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    
    sort(ar,ar+n);
    cin >> m; 
    int arr[m];
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+m);
    for(int i=0,j=0;i<n||j<m;){
        if(ar[i]==arr[j]){
            i++;j++;
        }
        /*else if(ar[i]<arr[j]){
            if(ar[i]!=ar[i+1])
            cout << ar[i] << " ";i++;
        }*/
        else{
            if(arr[j]!=arr[j+1])
            cout << arr[j] << " ";j++;
        }
    }
    return 0;
}
