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
    ll n,A;
    ll a[100001];
    fill(a,a+100001,1);
    vector<ll>v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A;
        v.pb(A);
    }
    ll k=0,l=0,ans = 0;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            a[k]++;
        }
        else{
            k++;
        }
    }
    for(int i=1; i<=k; i++){
        if(a[i] == a[i-1]){
            l = 2* a[i];
            ans = max(ans,l);
        }
        else if(a[i] > a[i-1]){
            l = 2* a[i-1];
            ans = max(ans,l);
        }
        else{
            l = 2* a[i];
            ans = max(ans,l);
        }
    }
    cout<<ans<<endl;

    return 0;
}

