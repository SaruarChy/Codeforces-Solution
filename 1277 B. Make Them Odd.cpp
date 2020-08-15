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
    int t;
    ll n,a;
    cin>>t;
    while(t--){
        cin>>n;
        set<ll> s;
        set<ll>:: iterator itr;
        for(ll i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 0)
                s.insert(-a);
        }
        ll ans = 0;
        for(itr = s.begin(); itr!=s.end(); itr++){
//            cout<<*itr<<" ";
            ll m = *itr;
            ans++;
            if(m/2 % 2 == 0)
                s.insert(m/2);
        }

        cout<<ans<<endl;

    }

    return 0;
}

