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
int main() {
	long long int t,A,B,i ;
	cin >> t ;
	for(i=0;i<t;i++){
	
		cin >> A >> B ;
		if(B-A==1){
			cout << (A&B) << endl ;
		}
		else if(count_one(B)==1)
			cout << B-2 << endl ;
		else
        {
            if(B%2)
                cout<<(B-1)<<endl;
            else
                cout<<(B-2)<<endl;
        }
	}
}