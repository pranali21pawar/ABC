#include <iostream>
using namespace std;

long factorial (int n){
	if(n==0)
		return 1 ;
	else
		return n*factorial(n-1);
}
int main()
{
	int n , m ;
	cin >> n ;
	cin >> m ;
	
	cout << factorial(n)%m;
}

/*
mod = 1000000007 ;
long long mod_inverse(long long x){
	long long ans = 1, y = mod-2;
	while(y){
		if(y&1){
			ans = (ans*x)%mod;
		}
		x = (x*x)%mod;
		y >>= 1;
	}
	return ans;
}

long long power(long long x, long long y){
        long long ans = 1;
        while(y){
            if(y&1){
                ans = (ans*x)%mod;
            }
            x = (x*x)%mod;
            y >>= 1;
        }
        return ans;
    }

*/