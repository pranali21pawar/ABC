#include <iostream>
using namespace std;
#define mod (int)(1e9 + 7)

int main()
{
	int T ;
	scanf("%d",&T);
	long long int ans , pow2[1000005], pow3[1000005], n;
	pow2[0] = 1;
	pow3[0] = 1;
	for(long long int i = 1;i<=1000000;i++)
	{
		pow2[i] = (2 * pow2[i - 1]) % mod;
		pow3[i] = (3 * pow3[i - 1]) % mod;
	}
	
	for (int i = 0; i < T; i++)
	{
		scanf("%lld",&n);
		ans = (pow2[n]*(pow2[n] + 1)) - 2*pow3[n];
		if(ans > mod)
		ans = ans%mod ;
		printf("%lld \n",ans );
	}
	return 0 ;
}