#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ll n;
    cin>>t;
    while(t--){
        ll a[50001];
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        int flag = 0;
        for(int i=1; i<n; i++){
            if(a[i] >= a[i-1]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
