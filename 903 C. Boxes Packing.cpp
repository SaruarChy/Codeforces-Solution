//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,a;
    map<int,int>mp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
    }
    ll ans = 0,temp;
    map<int,int>:: iterator itr;
    for(itr = mp.begin(); itr != mp.end(); itr++){
        temp = itr->second;
        ans = max(ans,temp);
    }
    cout<<ans<<endl;


    return 0;
}
