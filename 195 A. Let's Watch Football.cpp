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

    ll a,b,c;
    cin>>a>>b>>c;

    ll total = 0,will = 0,need = 0,ans = 0;
    total = a * c;
    will = b * c;
    need = total - will;
    ans = (need / b);
    if(need % b != 0){
        ans++;
    }

    cout<<ans<<endl;

    return 0;
}

