#include <bis/stdc++.h>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    cout << (n+n%2)*(m+m%2)/4;
    return 0;
}
