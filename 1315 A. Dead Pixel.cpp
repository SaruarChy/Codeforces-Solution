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
    ll a,b,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;

        ll ans,ans1,ans2,ans3,ans4;
        ans = ans1 = ans2 = ans3 = ans4 = 0;
        ans1 = a * y;
        ans2 = b * x;
        ans3 = (a - 1 - x) * b;
        ans4 = a * (b - 1 - y);

        ans = max(ans1,ans2);
        ans = max(ans,max(ans3,ans4));
        cout<<ans<<endl;
    }

    return 0;
}

