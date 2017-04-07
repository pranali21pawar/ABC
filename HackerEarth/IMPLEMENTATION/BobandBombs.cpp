#include <iostream>
using namespace std;

int main()
{
    int T,count,j,x,MAX=100000 ;
    char str[MAX];
    cin >> T ;
    for(int i=0;i<T;i++){
        count=0;
        cin >> str ;
        for(j=0;str[j]!='\0';j++){
            if(str[j]=='B'){
                for(x=j-2;x<j+3;x++){
                    if(str[x]&&str[x]=='W'){
                        str[x]='0';count++;
                    }   
                }
            }
        }
        cout << count << endl ;
    }
    return 0;
}
