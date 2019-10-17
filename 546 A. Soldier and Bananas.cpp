#include<stdio.h>
int main()
{
    int i;
    long long int k,n,w,ans=0;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(i=0; i<=w; i++)
    {
        ans+=i*k;
    }
    ans-=n;
    if(ans<0)
    {
        ans=0;
    }
    printf("%lld\n",ans);

    return 0;
}
