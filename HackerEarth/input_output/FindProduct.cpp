#include <iostream>
using namespace std;

int main()
{
	int N ;
	long long int product =1, mod = 1000000007 ;
	cin >> N ;
    long long int arr[N] ;
    for(int i = 0 ;i < N ;i++){
    	cin >> arr[i];
    }
    for(int i = 0 ;i < N ;i++){
    	product = product*arr[i];
    	product = product%mod ;
    }
    cout << product << endl ;
    return 0;
}
