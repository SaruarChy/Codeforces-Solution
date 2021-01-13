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
    ll t, n, x, c;
    cin>>t;
    while(t--){
        ll minAns = 0, maxAns = 0, sum = 0;
        cin>>n>>x;
        vector<ll> a;
        for(ll i=0; i<n; i++){
            cin>>c;
            a.pb(c);
            sum += c;
            maxAns += c / x;
            if(c % x != 0)maxAns++;
        }
        minAns = (sum / x);
        if(sum % x != 0)
            minAns++;


        cout<<minAns<<" "<<maxAns<<endl;
    }
    return 0;
}

