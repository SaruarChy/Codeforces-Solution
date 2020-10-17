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
    cin>>t;
    ll x1,y1,x2,y2;
    while(t--){
        ll ans = 0;
        cin>>x1>>y1>>x2>>y2;
        if(x1 == x2 || y1 == y2){
            ans = abs(x1 - x2) + abs(y1 - y2);
        }
        else{
            ans = abs(x1 - x2) + abs(y1 - y2) + 2;
        }
        cout<<ans<<endl;
    }

    return 0;
}

