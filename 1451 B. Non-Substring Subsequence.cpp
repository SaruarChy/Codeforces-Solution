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
    ll test,n,q,l,r;
    cin>>test;
    while(test--){
        string s;
        cin>>n>>q>>s;
        while(q--){
            bool ok = false;
            cin>>l>>r;
            l--,r--;
            for(ll i=0; i<l; i++){
                if(s[i] == s[l])
                    ok = true;
            }
            for(ll i=r+1; i<n; i++){
                if(s[i] == s[r])
                    ok = true;
            }
            if(ok){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }

    return 0;
}

