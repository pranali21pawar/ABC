#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    vector <int> v;
    int num,flag=1,i=0 ;
    while(flag==1)
    {
        cin >> num ;
        v.push_back(num);
        cin >> flag ;
    }
        while(v[i]!=42)
        {
            cout << v[i];i++;
        }
}
