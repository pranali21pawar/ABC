#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int mat[n*n];
    for( i=0;i<n*n;i++){
        cin >> mat[i];
    }
    int sum1=0;
    for(i=0;i<n*n;){
        //cout << mat[i] << endl ;
        sum1+=mat[i];
        i=i+n+1;
    }
    int sum2=0;
    for(i=n-1;i<n*n-1;){
        //cout << mat[i] << endl ;
        sum2+=mat[i];
        i=i+n-1;
    }
    int sum = abs(sum1-sum2);
    cout << sum ;
    return 0;
}
