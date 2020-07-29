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
    ll a,b,c,ans = 0;
    cin>>a>>b>>c;
    ans += min(a,b);
    ans *= 2;
    ll Min = min(a,b);
    if(a > Min){
        ans++;
    }
    else if(b > Min){
        ans++;
    }
    ans += c * 2;
    cout<<ans<<endl;


    return 0;
}

