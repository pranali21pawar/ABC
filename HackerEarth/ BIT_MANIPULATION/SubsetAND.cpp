#include <iostream>
using namespace std;

int main() {
	int t , n,z,s,i,j,x;
	cin >> t ;
	for(i=0;i<t;i++){
		cin >> z >> n ;
		for(j=0;j<n;j++){
			cin >> s ;
			x=z&s;
			if(x==0){
				cout << "YES" << endl ;
				break;
			}
			else if(j==n-1)
			    cout << "NO" << endl ;
		}
	}
	return 0 ;
}