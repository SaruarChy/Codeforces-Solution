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
    ll n,a[200001];
    cin>>n;
    for(ll i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    ll k = 1,ans = 0;
    for(int i=0; i<n; i++){
        if(k <= a[i]){
            ans++;
            k++;
        }
    }
    cout<<ans<<endl;


    return 0;
}

