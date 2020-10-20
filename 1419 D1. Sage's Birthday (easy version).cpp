#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,a[100001],b[100001];
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    ll N = n;
    N /= 2;
    if(n & 1)N++;
    for(ll i=0; i<N; i++){
        b[i] = a[i];
    }
    sort(a,a+n);
    vector<ll>v;
    for(int i=0; i<N; i++){
        v.pb(b[i]);
        if((n & 1) && (i+1 == N)){
            continue;
        }
        v.pb(a[i]);
    }
    cout<<N-1<<endl;
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;


    return 0;
}

