//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
ll a[200001],b[200001];
int main()
{
    fastread();
    int t;
    ll n,k;
    cin>>t;
    while(t--){
        ll d = -1000000000;
        cin>>n>>k;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            d = max(d,a[i]);
        }
        for(ll i=0; i<n; i++){
            a[i] = d - a[i];
            b[i] = a[i];
        }
        if(k % 2 == 1){
            for(ll i=0; i<n; i++){
                cout<<a[i]<<" ";
            }cout<<endl;
        }
        else{
            sort(b,b+n,greater<ll>());
            d = b[0];
            for(ll i=0; i<n; i++){
                a[i] = d - a[i];
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }

    return 0;
}

