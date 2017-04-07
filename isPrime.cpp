#include<iostream>
using namespace std ;
bool IsPrime(int number)
{
	int i;
	for (i=2; i*i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
    int Test,x,minimum,maximum;
    cin >> Test ;
    for(int i=0;i<Test;i++)
    {
        cin >> minimum;
        cin >> maximum;
        for(x=minimum;x<=maximum;x++)
        {
            if(IsPrime(x))
                cout << x << endl ;
        }

    }
}
