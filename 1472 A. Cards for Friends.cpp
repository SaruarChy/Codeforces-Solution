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
    ll t;
    cin>>t;
    while(t--){
        ll ans = 1, w = 0, h = 0, n = 0;

        cin>>w>>h>>n;
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        while(w % 2 == 0){
            ans *= 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            ans *= 2;
            h = h / 2;
        }
        //cout<<ans<<endl;
        if( n <= ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

