#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int q;
    cin>>q;
    string str = "hackerrank", s;
    while(q--){        
        cin>>s;
        if (s.size() < str.size()) {
            cout << "NO" << endl;
            break;
        }
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < str.size() && s[i] == str[j]) {
                    j++;
            }
        }
        cout << (j == str.size() ? "YES" : "NO") << endl;
    }
    return 0;
}
