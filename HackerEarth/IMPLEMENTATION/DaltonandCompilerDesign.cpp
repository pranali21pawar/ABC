#include <iostream>
using namespace std ;
int main(){
	long long int t,n,x,y ;
	cin >> t ;
	for(int i=0;i<t;i++)
	{
		cin >> n ;
		x=n/2;
		y=n-x;
		if(y<x)
			cout << y << " " << x << endl ;
		else
			cout << x << " " << y << endl ;
	}
	return 0 ;
}