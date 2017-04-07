#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;
char change_case (char c) {
    if (isupper(c)) 
        return tolower(c); 
    else
        return toupper(c); 
}
int main()
{
    string str ;
    cin >> str ;
    
    for(int i =0 ; i <str.length() ;i++){
        str[i]=change_case(str[i]);
    }
    cout << str ;
    return 0;
}
