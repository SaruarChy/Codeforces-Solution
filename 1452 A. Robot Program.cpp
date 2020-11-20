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
    ll t,x,y;
    cin>>t;
    while(t--){
        ll sum = 0, sub = 0,m = 10001;
        cin>>x>>y;
        if(x == y){
            cout<<x*2<<endl;
            continue;
        }
        m = min(x,y);
        sum = m * 2;
        sub = max(x,y) - m;
        sum++,sub--;
        sum += (sub * 2);
        cout<<sum<<endl;
    }

    return 0;
}

