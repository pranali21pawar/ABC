#include <iostream>
using namespace std;

#define MOD 1000000009
long long powmod (long long a, long long b) {
	long long ans = 1;
	while (b) {
		if (b & 1) {
			ans = ans * a % MOD;
		}
		a = a * a % MOD;
		b>>=1;
	}
	return ans;
}
long long inv (int x) {
	return powmod(x,MOD-2);
}
int main () {
	int n;
	scanf("%d",&n);
	long long final = 1;
	for (int i=0; i<n; i++) {
		final = final * (2 * n-i) % MOD * inv(1 + i) % MOD;
	}
	final = final * inv(1+n)%MOD;
	printf("%d\n",(int)final);
	return 0;    
}