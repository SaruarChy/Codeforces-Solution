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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] > a[j]){
                    ans++;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
