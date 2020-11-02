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

    ll t,n;
    cin>>t;
    while(t--){
        ll range = 0;
        cin>>n;
        range = 4 * n;
        range -= 2;
        while(n--){
            cout<<range<<" ";
            range -= 2;
        }
        cout<<endl;
    }

    return 0;
}
