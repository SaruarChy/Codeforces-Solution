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
    cin>>a>>b;
    ll A = 1, B = 1;
    for(ll i=2; i<=min(a,b); i++){
        A *= i;
    }
    cout<<A<<endl;

    return 0;
}

