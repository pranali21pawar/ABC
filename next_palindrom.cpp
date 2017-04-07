#include<iostream>
using namespace std ;
bool rev(int);
int main()
{
    int test ;
    cin >> test ;
    for (int i=0;i<test;i++)
    {
        int n;
        cout<<"Enter a number:";
        cin>>n;
        while (1)
        {
            if(rev(n)==true)
            {
                cout << n << endl ;break ;
            }
            else
                n++;
        }
    }

}
bool rev(int n)
{
    int n1,d,rn;
    rn=0;
	n1=n;
	while(n>0)
	{
		d=n%10;
		rn=(rn*10)+d;
		n/=10;
	}
	if(n1==rn)
        return true ;
	else
        return false;
}
