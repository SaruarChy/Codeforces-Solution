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
    vector<ll>a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans = a[n-2] - a[0];
    ans = min(ans,(a[n-1] - a[1]) );
    cout<<ans<<endl;

    return 0;
}
