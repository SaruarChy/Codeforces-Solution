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

    ll n,k,a[100001];
    cin>>n>>k;
    for(ll i=0; i<k; i++){
        cin>>a[i];
    }
    ll ans = 0,type = 0,mod = 0;
    vector< pair<ll,ll> >v;
    for(ll i=0; i<k; i++){
        mod = n % a[i];
        v.pb(make_pair(mod,i));
    }
    sort(v.begin(),v.end());
    type = v[0].second;
    ans = n / a[type];

    cout<<type+1<<" "<<ans<<endl;


    return 0;
}

