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
    ll t,n,a[105];
    cin>>t;
    while(t--){
        cin>>n;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        map<ll,ll>::iterator itr;
        for(itr=mp.begin(); itr!=mp.end(); itr++){
            ans = max(ans,itr->second);
        }
        cout<<ans<<endl;

    }
    return 0;
}
