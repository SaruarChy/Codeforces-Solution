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

    ll t;
    ll a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;
    }

    return 0;
}

