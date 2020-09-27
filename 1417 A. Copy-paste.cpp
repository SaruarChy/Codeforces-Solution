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
    int t,n,k;
    ll a[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll s = a[0];
        ll rest = 0,ans = 0;
        for(int i=1; i<n; i++){
            rest = k - a[i];
            ans += (rest / s);
        }
        cout<<ans<<endl;
    }

    return 0;
}

