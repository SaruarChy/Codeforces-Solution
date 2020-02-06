#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    long long int a[105];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n-1; i++)
    {
        ans+=a[n-1]-a[i];
    }
    cout<<ans<<endl;
    return 0;
}
