#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,d;
    ll a[2001];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans = 0,div = 0,sub = 0;
    for(int i=1; i<n; i++){
        if(a[i-1] >= a[i]){
            sub = a[i-1] - a[i];
            if(sub == 0){
                ans++;
                a[i] += d;
            }
            else{
                sub++;
                div = sub / d;
                if(sub % d != 0){
                    div++;
                }
                a[i] += div * d;
                ans += div;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}

