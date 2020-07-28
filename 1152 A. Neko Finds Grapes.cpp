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
    ll n,m;
    ll a,b;
    cin>>n>>m;

    ll oddA = 0,evenA = 0,oddB = 0,evenB = 0;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(a % 2 == 1)oddA++;
        else evenA++;
    }
    for(ll i=0; i<m; i++){
        cin>>b;
        if(b % 2 == 1)oddB++;
        else evenB++;
    }

    ll ans = 0;
    if(oddA > 0 || oddB > 0){
        if(oddB > 0)
            ans = min(oddB,evenA);
        if(oddA > 0)
            ans += min(evenB,oddA);
    }

    cout<<ans<<endl;

    return 0;
}
