#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <math.h>
using boost::multiprecision::int128_t;
using namespace std;
int N[100000];
int M[100000];
int C[100000];
inline int128_t Factorial(int n){
	int128_t res = 1 ;
    for (int i = n ; i > n - 6 ; i--){
    	res *= i ; 
    }
    return res ;
}

int main()
{
    int T ,M,N,C;
    int128_t res ;
    cin >> T ;
    long long int x ;
    x= pow(10,9)+7;
    for (int i = 0; i < T; i++)
    {
        cin >> N[T] ;
        cin >> M[T] ;
        cin >> C[T] ;
        res = (Factorial(N-M-C)/(Factorial(C)*Factorial(N-M)))*(Factorial(M-C+1)/(Factorial(C+1)*Factorial(M-2*C)));
        res = res % x;
    }
    return 0;
}
