#include <iostream>
#include <algorithm>
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

int main(){
	int t,n,k,i,j,sum=0,count,res[1000] ;
	cin >> t ;
	for(i=0;i<t;i++){
	    sum=0;
		cin >> n >> k ;
		for(j=0;j<n;j++){
			cin >> res[j];
			res[j]=count_one(res[j]);			
		}
		sort(res,res+n);
		for(j=n-k;j<n;j++){
			sum+=res[j];
		}
		cout << sum << endl ;
	}
	return 0 ;
}
