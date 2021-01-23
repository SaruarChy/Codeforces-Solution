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
    ll n, l, r,gcd = 0, a, b;
    cin>>l>>r;
    a = l, b = r;
    n = (r - l +1) / 2;
    vector< pair<ll,ll> >v;
    for(ll i=0; i<n; i++){
        v.pb(make_pair(a++,b--));
    }
    for(ll i=0; i<n; i++){
        gcd = __gcd(v[i].first,v[i].second);
        if(gcd > 1){
            if(i+1 < n){
                swap(v[i].first,v[i+1].second);
            }
        }
    }
    bool ok = false;
    for(ll i=0; i<n; i++){
        gcd = __gcd(v[i].first,v[i].second);
        if(gcd == 1){
            ok = true;
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"YES\n";
        for(ll i=0; i<n; i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}

