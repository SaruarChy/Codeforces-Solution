#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a[m]=i;
    }
    cout<<a[1]<<" ";
    for(i=2; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
