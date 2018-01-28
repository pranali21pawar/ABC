#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    stack<long int> s, smax;
    long int q,data;
    cin >> q;
    while(q--){
        int flag;
        cin >> flag;
        if(flag==1){
            cin >> data;
            s.push(data);
            if(smax.empty() || data>smax.top()){
                smax.push(data);
            }
            else{
                smax.push(smax.top());
            }
            
        }
        else if(flag==2){            
            
                smax.pop();
            
            s.pop();
        }
        else if(flag==3 && !smax.empty()){
            cout << smax.top() << endl;
        }
    }
    
    return 0;
}
