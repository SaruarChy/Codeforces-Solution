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
    ll t;
    ll a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(b < a){
            swap(a,b);
        }
        ll sub = 0,sum = 0,div = 0,mod = 0;
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
