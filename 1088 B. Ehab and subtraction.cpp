//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    ll n,k,a;
    cin>>n>>k;
    set<ll>s;
    s.insert(0);
    for(ll i=0; i<n; i++){
        cin>>a;
        s.insert(a);
    }

    auto it = s.begin();
    for(auto i=0; i<k; i++){
        if (next(it) == s.end()){
            cout<<0<<endl;
        }
        else{
            cout<<*next(it) - *it<<endl;
            it = next(it);
        }
    }
    return 0;
}
