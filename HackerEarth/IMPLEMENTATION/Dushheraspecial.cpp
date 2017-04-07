#include <iostream>
using namespace std ;
int main(){
	long long int t,i,j,k,n,ans ;
	cin >> t ;
	for(i=0;i<t;i++){
		cin >> n >> k ;
		for(j=0;j<n;j++){
			if(j==0){
				ans = k+1;
			}
			else{
				ans += k+1 ;
			}
			cout << ans << " " ;
		}
		cout << endl ;
	}
}