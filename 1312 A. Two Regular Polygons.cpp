#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    int tag;
    cin>>t;
    while(t--)
    {
        tag=0;
        cin>>n>>m;
        if(n%m==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
