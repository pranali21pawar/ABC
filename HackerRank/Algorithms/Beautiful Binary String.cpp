#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    string b;
    cin >> b;
    int count = 0;
    int exists=b.find("010");
    if(exists==string::npos)
        cout<<"0";
    else
    {   
        while(exists!=string::npos)
        {
            b[exists+2]=1;
            count++;
            exists=b.find("010");
         }
        cout<<count;
    }
    return 0;
}
