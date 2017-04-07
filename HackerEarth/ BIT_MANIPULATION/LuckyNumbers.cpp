#include <iostream>
using namespace std;
#define mod 1000000007
int count_one (int n)
{
	int count = 0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}
int main () {
	int t,n,sum = 0;
	cin >> t ;
	while(t--){
		cin >> n ;
		while(n){
			if(count_one(n)==2)
				sum + = n ;	
			sum = sum%mod ;
			n--;
		}	
		cout << sum << endl ;
	}
	
	return 0 ;
}