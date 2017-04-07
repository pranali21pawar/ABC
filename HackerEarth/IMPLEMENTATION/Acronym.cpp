#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    int K, length, found=0 ,i,j;
    char ch ;
    string word ;
    cin >> K ;
    vector<string> v;
    vector<char> res;
    for(i=0;i<K;i++){
        cin >> word ;
         v.push_back(word) ;
    }
    cin >> length ;
    string str ;
    
    for(int i=0;i<length;i++){
        cin >> str ;
        found=0;
        for(j=0;j<K;j++){
            if(str==v.at(j))
             found = 1 ;
        }
        ch = toupper(str[0]);
        if(!found){
        res.push_back(ch);
        }
        
    }
    for(int k=0;k<res.size();k++){
    	cout << res.at(k);
    	if(k<res.size()-1)
    	cout << ".";
    }
    return 0;
}
