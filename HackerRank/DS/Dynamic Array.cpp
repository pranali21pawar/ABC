#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q, lastAns, seq, R,x,y ;
    cin >> N >> Q ;
    vector<int> list;
    vector<vector<int> > seqList(N,list) ;
    for(int i=0;i<Q;i++){
        cin >> R >> x >> y ;
        if(R==1){
            seq = (x^lastAns) % N;
            seqList[seq].push_back(y);
        }
        else{
            seq = (x^lastAns) % N;
            lastAns = seqList[seq][y% seqList[seq].size()] ;
            cout << lastAns << endl ;
        }
    }
    return 0;
}
