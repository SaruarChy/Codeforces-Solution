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
        ll k=1,cur = 0;
        cin>>n;
        while(cur < n){
            cur += k;
            k++;
        }

        if(cur == n+1){
            cout<<k<<endl;
        }
        else{
            cout<<k-1<<endl;
        }
    }

    return 0;
}
