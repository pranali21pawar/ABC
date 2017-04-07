#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string str ;
    cin >> str ;
    int j = str.length() ;
    
    for(int i = 0 ; i < str.length();i++){
        j--;
    	if(str[i]!=str[j]){
    		cout << "NO" << endl ;
    	    break ;
    	}
    }
    if(j==0)
    cout << "YES" << endl ;
    return 0;
}
