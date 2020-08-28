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
    int n;
    ll a[1001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<ll>v;
    int N = n/2;
    if(n%2 == 1){
        N = (n/2) +1;
    }
    for(int i=0; i<N; i++){
        v.pb(a[i]);
        if(i == (n-1-i))continue;
        v.pb(a[n-1-i]);
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
