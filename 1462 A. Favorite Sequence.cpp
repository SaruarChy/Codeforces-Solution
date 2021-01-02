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
    ll t,n,a[305];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll div = 0;
        vector<ll>v;
        div = (n/2) + (n%2);
        for(ll i=1; i<=div; i++){
            if(n&1){
                if(i == div){
                    v.pb(a[i]);
                    continue;
                }
            }
            v.pb(a[i]);
            v.pb(a[n-i+1]);
        }
        for(ll i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

