#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n<38 || n%5 < 3)
            cout << n << endl;
        else if(n%5 >= 3)
            cout << n+ (5-n%5) << endl;       

    }
    return 0;
}