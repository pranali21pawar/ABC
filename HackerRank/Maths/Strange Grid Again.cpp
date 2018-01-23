#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long long r,c;
    cin>>r>>c;
    
    if(r%2)  
        cout<<(r/2)*10+(c-1)*2;
    else 
        cout<<(r/2-1)*10+1+(c-1)*2;
    
    return 0;
}
