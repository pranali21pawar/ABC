#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int a = x1-x2;
    int b = v2-v1;
    if(a==0){
        return "YES";
    }
    if( ((a<0&&b<0) || (a>0&&b>0)) && a%b==0 ){
        return  "YES";        
    }
    
    return "NO";
}

int main() {
    int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
