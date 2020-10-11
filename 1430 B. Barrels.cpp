#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,k;
    ll a[200005];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(ll i=0; i<n; i++){
            cin>>a[i];

        }
        sort(a,a+n,greater<ll>());
        ll m = a[0];
        ll i = 1;
        while(k--){
            m += a[i];
            a[i] = 0;
            i++;
        }
        sort(a,a+n);
        cout<<m-a[0]<<endl;
    }

    return 0;
}

