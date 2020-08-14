//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
const int INF = 2e9;
int main()
{
    fastread();
    int t;
    ll n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a = 0,ans = 0;
        vector<ll>v;
        for(int i = 1; i <= 9; i++) {
            a = i;
            while(a < INF) {
                v.pb(a);
                a = 10 * a + i;
            }
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i] <= n){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

