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
    ll t,n,d, a[105];
    cin>>t;
    while(t--){
        cin>>n>>d;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool ok = false;
        for(ll i=1; i<n; i++){
            if(a[i] + a[i-1] <= d){
                ok = true;
                break;
            }
        }
        if(a[n-1] <= d || ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
