#include<stdio.h>

int main()
{
    int a,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        d+=1;
    }
 printf("%d\n",d);
    return 0;
}
