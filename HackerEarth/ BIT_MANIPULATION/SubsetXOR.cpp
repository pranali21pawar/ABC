#include <iostream>
using namespace std;

int main()
{ int a[200],t,i,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
if(n>1) printf("%d\n",0);
else printf("%d\n",a[0]);
}

return 0;
}