#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <math.h>
using boost::multiprecision::int128_t;
using namespace std ;
int main(){
    int test ;
    cin >> test ;
    int128_t N ;
    long long int x ;
    x= pow(10,9)+7;
    int128_t minx , maxx ;
    for(int i = 0 ; i <test ; i++){  
        cin >> N;
        minx = N*(N-1)*(N-1)/4;
        maxx = N*(N-1)*((2*N)-1)/6;
        cout << minx%x << " " << maxx%x << endl ;
    }   
}