#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
ll b[200001];
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>freq(n+1),idx(n+1);
        for(ll i=0; i<n; i++){
            cin>>a;
            freq[a]++;
            idx[a] = i+1;
        }
        ll index = -1;
        for(ll i=0; i<=n; i++){
            if(freq[i] == 1){
                index = idx[i];
                break;
            }
        }

        cout<<index<<endl;
    }

    return 0;
}
