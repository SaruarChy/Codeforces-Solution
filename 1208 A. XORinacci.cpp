#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,xr = 0;
        cin>>a>>b>>n;
        vector<ll>v;
        xr = a ^ b;
        v.pb(a),v.pb(b),v.pb(xr);
        if(n % 3 == 0){
            cout<<v[0]<<endl;
        }
        else if(n % 3 == 1){
            cout<<v[1]<<endl;
        }
        else{
            cout<<v[2]<<endl;
        }

    }
    return 0;
}

