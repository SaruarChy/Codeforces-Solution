#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,m,a;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin>>a;
            sum += a;
        }

        if(sum == m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

