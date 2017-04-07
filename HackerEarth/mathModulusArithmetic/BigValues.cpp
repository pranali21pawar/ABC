/*
Input:  First and only line of input will take an integer N.  6<=N<10^6
Output: Print C(N,6) mod 10^9 + 7
*/


#include <iostream>
#include <math.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::int128_t;
using namespace std;

inline int128_t Factorial(int n){
	int128_t res = 1 ;
    for (int i = n ; i > n - 6 ; i--){
    	res *= i ; 
    }
    return res ;
}

int main()
{
    int n ;
    cin >> n ;
    long long int x ;
    x= pow(10,9)+7;
    cout <<(Factorial(n)/720)%x << endl;
    return 0;
}
