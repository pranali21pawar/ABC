#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <math.h>
using boost::multiprecision::int512_t;
using namespace std;
#define mod (int)(1e9 + 7)

int512_t C(int n, int r) {
    if(r < n / 2) 
        r = n - r; // because C(n, r) == C(n, n - r)
    int512_t ans = 1,num=1,den=1;
    int i ;
    for ( i = n; i > r; i--)
    {
        //cout << "num*i : " << num << "*" << i << endl ;
        num *= i ;
        //cout << num << endl ;
    }
    for ( i = 1; i <= n-r; i++ )
    {
        //cout << "den*i : " << den << "*" << i << endl ;
        den = den*i ;
        //cout << "---" << den << endl ;
    }
    ans = num/den ;
    //cout << "ans = num/den : " << ans << endl ;
    return ans ;
}

int main()
{
    int T , k ,j , x ;
    long long int m , sum ;
    int512_t res ;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
        {
            sum = 0 ;
            scanf("%d",&k);
            scanf("%lld",&m);
            for ( j = 0; j < k ; j++)
            {
                scanf("%d",&x);
                sum += x ;
            }
            //cout << m-sum+k-1 << "   " << k-1 << endl ;
            if(m <= sum)
                res = 0 ;
            else
                res = C(m-sum+k-1,k-1);
            cout << res%mod << endl ;
        }
    return 0;
}
