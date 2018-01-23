#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    if((2*area)%base==0)
    return (2*area)/base;
    
    return (2*area)/base + 1;
    // Complete this function
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
