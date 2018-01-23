#include <bits/stdc++.h>

using namespace std;

unsigned long long int solve(unsigned long long int row, unsigned long long int column){
    // Complete this function
     return (((row-1)*column)+(column-1));
}

int main() {
    unsigned long long int n;
    unsigned long long int m;
    cin >> n >> m;
    unsigned long long int result = solve(n, m);
    cout << result << endl;
    return 0;
}
