#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,a;
    cin>>t;
    while(t--){
        vector<ll>v;
        cin>>n;
        ll m = 0;
        for(ll i=0; i<n; i++){
            cin>>a;
            m = max(m,a);
            v.pb(a);
        }
        ll pos = 0;
        for(ll i=0; i<n; i++){
            if( (v[i] > v[i-1] && v[i] == m) && (i > 0) ){
                pos = i+1;
                break;
            }
            else if( (v[i] > v[i+1] && v[i] == m) && (i < n-1) ){
                pos = i+1;
                break;
            }
        }
        if(pos > 0){
            cout<<pos<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}

