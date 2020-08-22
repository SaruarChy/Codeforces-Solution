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
    int t;
    ll a0,a1,a2;
    ll b0,b1,b2;
    cin>>t;
    while(t--){
        cin>>a0>>a1>>a2;
        cin>>b0>>b1>>b2;
        ll a1b0 = 0,a0b2 = 0,a2b1 = 0,ans = 0;
        a1b0 = min(a1,b0);
        a1 -= a1b0;
        b0 -= a1b0;

        a0b2 = min(a0,b2);
        a0 -= a0b2;
        b2 -= a0b2;

        a2b1 = min(a2,b1);
        a2 -= a2b1;
        b1 -= a2b1;

        ans += a2b1 * 2;
        ans -= 2 * min(a1,b2);
        cout<<ans<<endl;
    }

    return 0;
}

