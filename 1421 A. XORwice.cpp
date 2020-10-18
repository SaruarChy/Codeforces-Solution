#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,a,b;
    cin>>t;
    while(t--){
        ll d = 0;
        cin>>a>>b;
        d = a ^ b;
        cout<<d<<endl;
    }

    return 0;
}
