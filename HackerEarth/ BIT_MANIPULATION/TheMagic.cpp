#include <iostream>
using namespace std;
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
int main()
{
	int t,n,ans ;
	cin >> t ;
	while(t--){
		cin >> n ;
		ans = count_one(n);
		cout << ans << endl ;
	}
    return 0;
}
