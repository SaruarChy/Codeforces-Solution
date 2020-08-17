//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
ll a[200001];//b[200001];
int main()
{
    fastread();
    int t;
    ll n;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        if(is_sorted(a,a+n)){
            cout<<0<<endl;
            continue;
        }
        ll ans = 0;
        for(ll i=1; i<n; i++){
            if(a[i-1] > a[i]){
                ans += (a[i-1] - a[i]);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}

