#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> vec(n,0);
    string str;
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    int k; cin >> k; //cout << "line 12" << endl ;
    
    if(n==1 && vec[0]==0){
        cout << -1; return 0;
    }
    
    if(k%3==0){ //cout << "line 18" << endl ;
        for(int i=0;i<k;i++){
            str+=to_string(vec[n-1]);
        } //cout << "line 21" << endl ;
        cout << str ; return 0;
    }
    
    int maxx=0;
     if(k==1){
        cout << vec[n-1]; return 0;
    }
    else if(k==2){
        if(vec[0]!=0){
            
            for(int j=n-1;j>=0;j--){
                for(int k=n-1;k>=0;k--){
                    if(vec[j]*10+vec[k]>maxx && (vec[j]*10+vec[k])%3==0){
                        maxx=vec[j]*10+vec[k];
                        str+=to_string(maxx);
                        cout << str ; return 0;
                    }
                    
                }
            }
            
        }
        else{
            for(int j=n-1;j>0;j--){
                for(int k=n-1;k>=0;k--){
                    if(vec[j]*10+vec[k]>maxx && (vec[j]*10+vec[k])%3==0){
                        maxx=vec[j]*10+vec[k];
                        str+=to_string(maxx);
                        cout << str ; return 0;
                    }
                    
                }
            }
            
        }
        
    }
    
    
    else{
        int fact = k/3;
        for(int j=0;j<fact;j++){
            str+=to_string(vec[n-1]);
        }
        k=k%3;
        if(k==1){
            cout << str+to_string(vec[n-1]); return 0;
        }
        if(k==2){
           for(int j=n-1;j>0;j--){
                for(int l=n-1;l>=0;l--){
                    if(vec[j]*10+vec[l]>maxx && (vec[j]*10+vec[l])%3==0){
                        maxx=vec[j]*10+vec[k];
                        str+=to_string(maxx);
                        cout << str ; return 0;
                    }
                    
                }
            } 
        }
        
        
    }
    cout << -1 ; return 0;
    return 0;
}
