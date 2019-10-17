#include<stdio.h>
int main()
{
    int n=0,a=0,r,i;
    scanf("%d %d",&n,&a);
    for(i=1; i<=a; i++)
    {
        r=n%10;
        if(r==0)
        {
            n/=10;
        }
        else
            n-=1;
    }
    printf("%d\n",n);

    return 0;
}
