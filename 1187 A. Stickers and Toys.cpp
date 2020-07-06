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
    int T;
    ll n,s,t;
    cin>>T;
    while(T--){
        cin>>n>>s>>t;
        ll ans = max(n-s,n-t);
        cout<<ans+1<<endl;
    }

    return 0;
}
