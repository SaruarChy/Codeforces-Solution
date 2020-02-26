#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,get,ans;
    while(t--)
    {
        get=ans=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        else if(a<b)
        {
            get=b-a;
            ans++;
            if(get%2==0)
                ans++;
        }
        else if(a>b)
        {
            get=a-b;
            ans++;
            if(get%2!=0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
