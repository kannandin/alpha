#include<stdio.h>

int main()
{
    int i,a,c[100],b,d=0;
    scanf("%d",&a);
    scanf("%d",&b);
for(i=1;i<=a;i++)
{
    scanf("%d",&c[i]);
}
for(i=1;i<=b;i++)
{
    d=c[i]+d;
}
 printf("%d\n",d);
    return 0;
}
