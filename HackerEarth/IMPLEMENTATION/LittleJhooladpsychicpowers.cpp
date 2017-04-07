#include <iostream>
using namespace std;

int main()
{
    int count=0 ;
    char input[100];
    cin >> input ;
    for(int i=0;input[i]!='\0';i++){
        
        if(i==0){
            count++;
        }
        else{
            if(input[i]==input[i-1])
                count++;
            else
                count=1;
        }
        //cout << "input : " << input[i] << "  count : " << count << endl ;
        if(count==6){
            cout << "Sorry, sorry!" << endl;
            break;
        }
        else if(input[i+1]=='\0')
            cout << "Good luck!" << endl;
    }
    return 0;
}
