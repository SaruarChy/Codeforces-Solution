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
    ll n,m,ans = 0;
    cin>>n>>m;

    if(n == m){
        cout<<0<<endl;
    }
    else if(m % n != 0){
        cout<<-1<<endl;
    }
    else{
        ll d = m/n;
        while(d % 2 == 0){
            d /= 2;
            ans++;
        }
        while(d % 3 == 0){
            d /= 3;
            ans++;
        }
        if(d != 1)ans = -1;
        cout<<ans<<endl;
    }

    return 0;
}
