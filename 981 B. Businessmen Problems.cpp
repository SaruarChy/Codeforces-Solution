#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,m;
    map<ll,ll>mp;

    ll c,d;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>c>>d;
        mp[c] = d;
    }
    cin>>m;
    for(ll i=0; i<m; i++){
        cin>>c>>d;
        if(mp[c] < d){
            mp[c] = d;
        }
    }
    ll sum = 0;
    map<ll,ll>:: iterator itr;
    for(itr=mp.begin(); itr!= mp.end(); itr++){
        sum += itr->second;
    }
    cout<<sum<<endl;

    return 0;
}

