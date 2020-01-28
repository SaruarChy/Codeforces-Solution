#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int a,b,c;
    long long int ans;
    while(t--)
    {
        ans=0;
        cin>>a>>b>>c;
        ans=(a+b+c)/2;
        cout<<ans<<endl;
    }
    return 0;
}
