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
    ll t;
    ll x,y,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        long double coal,sticks,div,need;
        ll ans = 0;
        coal = sticks = div = 0;
        coal = y * k;
        sticks = coal + (k-1);
        div = ceil(sticks/(x-1));
        ans = div + k;
        cout<<ans<<endl;
    }

    return 0;
}
