#include<bits/stdc++.h>
using namespace std;
const int MXN = 5e5 + 30;
int ans=0;
int a[MXN],b[MXN];
int main()
{
    int n,m,k;
    int i,j,x;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
        cin>>b[i];

    for(i=1; i<=k; i++)
    {
        cin>>x;
        for(j=1; j<=n; j++)
        {
            if(b[j]==b[x] && a[j]>a[x])
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
