#include <iostream>
using namespace std;

int main()
{
    int N , product=1;
    cin >> N ;
    for(int i =2;i<=N;i++){
    	product=product*i;
    }
    cout << product;
    return 0;
}
