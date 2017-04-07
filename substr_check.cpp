#include<iostream>
#include<string>
using namespace std ;
bool check(char *A, char *B)
{
    int i=0,j=0;
    while(i<10)
    {
        if(A[i]==B[j])
        {
            if (j==4)
            {
                return true ;
                break ;
            }
            i++;j++;
        }
        else
        {
            i++;j=0;
        }

    }
    return false ;
}
int main ()
{
    int Test, i, j ;
    cin >> Test ;
    char A[10], B[5];
    for(j=0;j<Test;j++)
    {
        cout << "A : ";
        for(i=0;i<10;i++)
            cin >> A[i];
        cout << "B : ";
        for(i=0;i<5;i++)
            cin >> B[i];
        cout << check(A,B) << endl ;
    }
}
