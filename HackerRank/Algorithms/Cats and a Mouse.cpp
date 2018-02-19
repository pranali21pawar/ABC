#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x, y, z, n;
    scanf("%d", &n);
    while (n--)
    {
        cin >> x>> y>>z;
        if (abs(x-z)>abs(y-z))
            printf("Cat B\n");
        else if (abs(x-z)<abs(y-z))
            printf("Cat A\n");
        else if (abs(x-z)==abs(y-z))
            printf("Mouse C\n"); 
    }
    return 0;
}
