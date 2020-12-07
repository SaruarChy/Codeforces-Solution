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
    ll t,n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector< pair<ll,ll> > v;
        for(ll i=0; i<n; i++){
            cin>>x>>y;
            v.pb(make_pair(x,y));
        }
        int dis = 0, c = 0;
        bool flag = false;
        //sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                dis = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
                if(dis <= k){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }

    return 0;
}

