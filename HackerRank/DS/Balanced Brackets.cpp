#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char> stk;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]== '(' || s[i]== '[' || s[i] == '{' ){
            stk.push(s[i]);
        }
        else if(!stk.empty()){
            if(s[i]== ')' && stk.top()== '('){
                stk.pop();
            }
            else if(s[i]== ']' && stk.top()== '['){
                stk.pop();
            }
            else if(s[i]== '}' && stk.top()== '{'){
                stk.pop();
            }
            else{
                return "NO";
            }
        }
        else{
            return "NO";
        }
    }
    if(stk.empty()){
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
