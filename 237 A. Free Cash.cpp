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
    ll n,c = 0,ans = 1;
    string h,m,s;
    map<string,int>mp;
    map<string,int>::iterator itr;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>h>>m;
        s = h + '_' + m;
        mp[s]++;
    }
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        c = itr->second;
        ans = max(ans,c);
    }
    cout<<ans<<endl;


    return 0;
}

