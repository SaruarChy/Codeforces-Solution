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
    ll n,r;
    cin>>t;
    while(t--){
        ll ans = 0,m = 0;
        cin>>n>>r;
        if(n > r){
            m = min(n,r);
            ans = m*(m+1)/2;
        }
        else{
            m = min(n,r);
            m--;
            ans = m*(m+1)/2;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}

