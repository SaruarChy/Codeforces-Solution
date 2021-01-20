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
    ll t,n;
    cin>>t;
    while(t--){
        ll k = 9;
        cin>>n;
        for(ll i=0; i<n; i++){
            if(i == 0){
                cout<<k;
                k--;
            }
            else{
                cout<<k;
                k++;
            }
            if(k == 10)k = 0;
        }
        cout<<endl;
    }
    return 0;
}

