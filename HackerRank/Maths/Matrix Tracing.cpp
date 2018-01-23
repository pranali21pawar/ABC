#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int k = 1000000007;

long long f(long long a)
{
    if(a<2)
        return 1;
    else
        return (a*f(a-1))%k;
}

long long modpow(long long base, long long exp, long long modulus) 
{
	base %= modulus;
	long long result = 1;
	
	while(exp > 0) 
	{
    	if(exp & 1) 
            result = (result * base) % modulus;
		
    	base = (base * base) % modulus;
    	exp >>= 1;
	}
	
	return result;
}


int main() 
{
    int t,m,n;
    cin >> t;
    
    while(t--)
    {
        cin >> m >> n;
        
        
        long long temp = (f(n-1)%k*f(m-1)%k)%k;
        temp = modpow(temp,k-2,k); //(f(n)*f(m-1))^(10000000007-2)
        
        long long result = (f(n+m-2)%k*temp%k)%k;
        
        cout << result << endl;
    }
    
    return 0;
}