
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T ;
    for(int k=0;k<T;k++){
        long long int n; cin>>n;
        long long int xmin=LONG_MAX, xmax=LONG_MIN, ymin=LONG_MAX, ymax=LONG_MIN;
        long long int x,y; 
        for(int i=0;i<n;i++){
            cin >> x>>y;
            if(x<xmin){
                xmin=x;
            }
            if(x>xmax){
                xmax=x;
            }
            if(y<ymin){
                ymin=y;
            }
            if(y>ymax){
                ymax=y;
            }
        }
        x = abs(xmin - xmax);
        y = abs(ymin - ymax);
        long long int ans = max(x,y);
        cout << ans*ans << endl ;
    }
    
    
    return 0;
}
