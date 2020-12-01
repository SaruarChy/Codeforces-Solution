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
    ll t,n,m,r,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
        ll dis = 0;
        dis = max(dis,(r-1) + (c-1));
        dis = max(dis,((n-r) + (c-1)));
        dis = max(dis,((r-1) + (m-c)));
        dis = max(dis,(n-r) + (m-c));

        cout<<dis<<endl;
    }

    return 0;
}
