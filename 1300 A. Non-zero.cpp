#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000];
    int sum,zero;
    cin>>t;
    while(t--)
    {
        sum=zero=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)zero++;
                sum+=a[i];

        }
        int ans=zero;
        sum+=zero;
        if(sum==0)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
