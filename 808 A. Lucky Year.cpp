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
    ll n,ans = 0;
    cin>>n;
    ll a = 1;
    while(a <= n) {
        a *= 10;
    }
    a /= 10;
    ll b = a;
    while(b <= n) {
        b += a;
    }
    ans = b - n;

    cout<<ans<<endl;
    return 0;
}
