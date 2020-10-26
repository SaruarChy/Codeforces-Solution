#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll a,b;
    ll div = 0,temp = 0;
    cin>>a>>b;
    ll ans = a;
    while(a >= b){
        if(a % b == 0){
            a /= b;
            ans += a;
        }
        else{
            temp = a;
            a /= b;
            ans += a;
            a += temp % b;

        }
    }
    cout<<ans<<endl;

    return 0;
}

