#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int c[6]={0};
    for(int i=0;i<n;i++){
        c[ar[i]]++;
    }
    int m=0, num=0;
    for(int i=0;i<6;i++){
        if(num<c[i]){
            num=c[i];
            m=i;
        }
        else if(num==c[i] && i<m){
            num=c[i];
            m=i;
        }
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
