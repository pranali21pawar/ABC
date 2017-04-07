#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define mod 1000000007
pair <int, pair<int, long long> > s[100000];
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
	int t,n,i,a;
	cin >> t ;
	while(t--){
		cin >> n ;
		for(int i=0;i<n;i++){
			cin >> a;
			s[i]=make_pair(count_one(a),make_pair(i,a));
		}
		sort(s,s + n);
		for(int i=0;i<n;i++){
			cout << s[i].second.second << " ";
		}
		cout << endl ;
	}
	
	return 0 ;
}