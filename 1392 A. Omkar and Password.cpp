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
    int t;
    ll n,a;
    cin>>t;
    while(t--){
        cin>>n;
        set<ll>s;
        for(ll i=0; i<n; i++){
            cin>>a;
            s.insert(a);
        }
        if(s.size() == 1){
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }

    return 0;
}
