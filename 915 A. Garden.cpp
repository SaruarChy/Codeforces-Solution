#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5];
    int ans=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(k%a[i]==0)
            ans=k/a[i];
    }
    cout<<ans<<endl;
    return 0;
}
