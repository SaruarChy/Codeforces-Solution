//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n;
    cin>>n;
    ll a[n+5],b[n+5],index[n+5];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        index[a[i]] = i;
    }
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        cin>>b[i];
        mp[(i-index[b[i]]+n)%n]++;
    }
    ll Max = 0;
    map<ll,ll>:: iterator itr;
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        Max = max(Max,itr->second);
    }
    cout<<Max<<endl;
    return 0;
}

