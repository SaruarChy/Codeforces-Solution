#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    int ans=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=abs(a-b);
        ans=c/5;
        c=c%5;
        if(c==1 or c==2)ans++;
        else if(c)ans+=2;

        cout<<ans<<endl;
    }

    return 0;
}
