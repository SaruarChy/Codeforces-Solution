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

    ll d,n,a,ans = 0;
    cin>>d>>n;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(i+1 == n)continue;
        else
            ans += (abs(d - a));
    }
    cout<<ans<<endl;

    return 0;
}

