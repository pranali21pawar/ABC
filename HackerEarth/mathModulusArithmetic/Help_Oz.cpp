#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <math.h>
using boost::multiprecision::int128_t;
using namespace std;

int n;
int a[100];

int Remainder(int M){
   int z = arr[0]%M;
   for(int i=1;i<n;++i ){
      if(arr[i]%M!=z)
      	return 0;
   }
   return 1;
}

int main()
{
    int M ;
    scanf("%d",$M);
    for (int i = 0; i < M; i++)
    	cin >> arr[i];
    	
    for (int128_t j = 2; j <= small; j++)
    {
    	for(i = 0;i<M ; i++)
    	{
    		if(i=0)
    			R = arr[i]%j;
    		else if(R != arr[i]%j)
    			break ;
    		else if(i==M-1){
    			if(R == arr[i]%j)
    				cout << R ;
    		}    		
    	}
    }
    return 0;
}

