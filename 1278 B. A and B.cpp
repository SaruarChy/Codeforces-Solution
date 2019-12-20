#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,d,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        d=abs(a-b);
        sum=0;
        for(long long int i=0;  i<100000; i++)
        {
            sum+=i;
            if(sum>=d && (sum-d)%2==0)
            {
               cout<<i<<endl;
               break;
            }
        }
    }
    return 0;
}
