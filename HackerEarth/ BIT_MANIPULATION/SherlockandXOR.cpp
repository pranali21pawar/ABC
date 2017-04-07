#include <iostream>
using namespace std;

int main()
{
	long long int t,n,odd,even;
	long long int ans;
	long long int arr[100000];
	cin >> t ;
	while(t--){
		even=odd=0;
		cin >> n ;		
		for(int i=0;i<n;i++){
			cin >> arr[i];
			if(arr[i]%2==0)
				even++;
			else
				odd++;
		}
		ans=even*odd;	
		cout << ans << endl ;
	}
    return 0;
}
