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
    ll a,b,c,d,e = 0,f = 0;
    cin>>a>>b>>c>>d;
    if(a > b){
        swap(a,b);
        if(a > c){
            swap(a,c);
        }
    }
    if(b > c){
        swap(b,c);
        if(a > b){
            swap(a,b);
        }
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    ll ans = 0;
    e = b - a;
    f = c - b;
    if(e < d){
        ans += d - e;
    }
    if(f < d){
        ans += d - f;
    }
    cout<<ans<<endl;

    return 0;
}
