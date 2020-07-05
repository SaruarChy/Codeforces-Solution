//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
ll a[10000001];
int main()
{
    fastread();
    int t;
    ll n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll tk = a[0]+k;
        if(abs(tk - a[0]) <= k && abs(tk - a[n-1]) <= k){
            cout<<tk<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
