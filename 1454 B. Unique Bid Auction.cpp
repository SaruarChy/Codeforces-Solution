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
        map<ll,ll>mp;
        map<ll,ll>::iterator itr;
        bool flag = false;
        ll pos = -1,m = 20001,freq = 0, digit = 0;
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a;
            b[a] = i+1;
            mp[a]++;
        }
        for(itr=mp.begin(); itr!=mp.end(); itr++){
            freq = itr->second;
            if(freq == 1){
                digit = itr->first;
                m = min(m,digit);
                flag = true;
            }
        }
        if(flag){
            cout<<b[m]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}

