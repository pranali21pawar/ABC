#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    int least=score[0], most=score[0], lcount=0, mcount=0;
    for (int i = 1; i < n; i++) {
       if(score[i]<least){
           lcount++;
           least=score[i];
       }
        if(score[i]>most){
           mcount++;
           most=score[i];
       }
    }
    cout<< mcount << " " << lcount << endl;


    return 0;
}
