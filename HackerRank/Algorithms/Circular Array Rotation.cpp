#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,k,q,a,index;
 vector<int> str;
 cin >> n >> k >> q ;
 for(int i = 0; i < n; i++){
        scanf("%d",&a);
        str.push_back(a);
 }
 k%=n;;
 for(int i = 0; i < q; i++){
        scanf("%d",&index);
        if(index-k >= 0)printf("%d\n",str[index-k]);
        else printf("%d\n",str[index-k+n]);
 }
 return 0;
}