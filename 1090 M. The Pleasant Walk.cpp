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
    //freopen("output.txt","w", stdout);

    ll n,k,a[100001],b[100001];
    cin>>n>>k;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    for(ll i=0; i<n; i++){
        b[i] = 1;
    }
    ll j = 0;
    for(ll i=1; i<n; i++){
        if(a[i] != a[i-1]){
            b[j]++;
        }
        else{
            j++;
        }
    }
    sort(b,b+n,greater<ll>());
    ll ans = b[0];
    cout<<ans<<endl;

    return 0;
}

