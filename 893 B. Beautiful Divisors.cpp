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

    ll n,num = 0,j = 1;
    cin>>n;
    vector<ll>v;

    while(1)
    {
        num = ((pow(2,j)-1) * (pow(2,j-1)));
        j++;
        if(num < 100001){
            v.pb(num);
        }
        else{
            break;
        }
    }
    ll ans = 0;
    for(ll i=0; i<v.size(); i++){
        if(v[i] <= n){
            if(n % v[i] == 0){
                ans = v[i];
            }
        }
        else{
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}

