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
    ll n,k,div = 0,ans = 0;
    cin>>n>>k;

    div = (n + 1) / 2;
    if(k <= div){
        ans = (k * 2) - 1;
    }
    else{
        ans = (k - div) * 2;
    }
    cout<<ans<<endl;

    return 0;
}
