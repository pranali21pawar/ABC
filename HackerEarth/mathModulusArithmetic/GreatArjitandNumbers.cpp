#include <iostream>
using namespace std ;
#define mod 1000000007
long long arr[1000006];
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

int main()
{
	long long t,n,calc,val,ans,i,c;
	cin >> t ;
	calc=mod_inverse(2);
	while(t--)
	{
		ans=0;
		cin >> n ;
		for(i = 0 ;i<n ; i++)
		{
			cin >> arr[i];
		}
		for(i=1;i<n;i++)
		{
			//Finding the values of A, B, C, ... 
			val=mod_inverse(arr[i-1]);
			val*=arr[i];
			val%=mod;
			//Calculating summation(A), summation(B) ... 
			c=val*(val+1);
			c%=mod;
			c*=calc;
			c%=mod;
			//Calculating the value of T
			ans+=c;
			ans%=mod;
		}
		//Finding the value of Q
		ans=(ans*(ans+1));
		ans%=mod;
		ans*=calc;
		ans%=mod;
		cout << ans << endl ;
	}
	return 0;
}