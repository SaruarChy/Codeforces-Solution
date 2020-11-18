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

    ll t,n,k,a;
    cin>>t;
    while(t--){
        vector<ll>v;
        cin>>n>>k;
        ll range = n*k,j = 0,div = 0,sum = 0;
        div = n/2;

        for(ll i=0; i<range; i++){
            cin>>a;
            v.pb(a);
        }
        for(ll i=range-1-div; i>=0; i-=div+1){
            //cout<<v[i]<<" ";
            sum += v[i];
            j++;
            if(j == k)break;
        }
        cout<<sum<<endl;
    }

    return 0;
}

