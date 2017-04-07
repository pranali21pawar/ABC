#include <iostream>
using namespace std;

int main()
{
	int t ;
	char S1[100000], S2[100000] ;
	cin >> t ;
	for(int i=0;i<t;i++){
		cin >> S1 ;
		cin >> S2 ;
		for()
	}
    return 0;
}


/*
http://www.sanfoundry.com/c-program-generate-possible-combinations-given-list-numbers/

#include<stdio.h>
#include<string.h>
#define N 10
 
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main()
{
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
    printf("\nEnter a list of numbers to see all combinations:\n");
    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    return 0;
}