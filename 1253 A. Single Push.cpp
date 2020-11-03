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

    ll t,n,a[100001],b[100001];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
            cin>>b[i];

        ll l = 100001,r = 0;
        bool flag = false;
        for(ll i=0; i<n; i++){
            if(a[i] == b[i])continue;
             else if(a[i] > b[i]){
                flag = true;
                break;
             }
             else if(a[i] < b[i]){
                l = min(l,i);
                r = max(r,i);
             }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else if( (flag == false) && (l == 100001 && r == 0)){
            cout<<"YES"<<endl;
        }
        else{
            set<ll>s;
            for(ll i=l; i<=r; i++){
                if(a[i] > b[i] || a[i] == b[i]){
                    flag = true;
                    break;
                }
                else{
                    ll dif = abs(a[i] - b[i]);
                    s.insert(dif);
                }
            }
            if(flag == true || s.size() > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}

