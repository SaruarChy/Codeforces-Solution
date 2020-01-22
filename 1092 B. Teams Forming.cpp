#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,i;
    cin>>n;
    int a[n+5];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i+=2)
    {
        if(a[i]!=a[i+1])
            s+=(a[i+1]-a[i]);
    }
    cout<<s<<endl;
    return 0;
}
