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

    ll t,l,r,d;
    cin>>t;
    while(t--){
        ll ans = 0, div = 0;
        cin>>l>>r>>d;
        if(d < l){
            ans = d;
        }
        else if(d <= r){
            div = r /d;
            div++;
            ans = (d * div);
        }
        else if(d > r){
            ans = d;
        }
        cout<<ans<<endl;
    }

    return 0;
}

