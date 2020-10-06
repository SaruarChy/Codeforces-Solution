#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<max(a,max(b,c))+1<<endl;
    }

    return 0;
}
