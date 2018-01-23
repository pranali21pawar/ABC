#include <bis/stdc++.h>

using namespace std;


int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        if(N<2){
            cout << 0 << endl;
        }
        else{
            int ans=1;
            if(N%2==0){
                ans*=N;ans/=2;ans*=(N-1);
            }
            else{
                ans*=N-1;ans/=2;ans*=(N);
            }
            cout << ans << endl;
        }
        
        
    }
    return 0;
}
