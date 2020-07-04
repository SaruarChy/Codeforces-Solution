//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

ll a[300001];
int main()
{
    fastread();
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;

        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        if(a[0] < a[n-1]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
