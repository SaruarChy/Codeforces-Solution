#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        if(l == 1 && r != 1){
            cout<<"NO"<<endl;
            continue;
        }
        if(l == 1 && r == 1){
            cout<<"YES"<<endl;
            continue;
        }
        ll a = r+1;
        if(a % 2 == 1)a++;
        ll x = a/2;
        ll mod = l % a;
        if(mod >= x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
