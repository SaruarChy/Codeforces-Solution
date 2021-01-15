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
    ll t;
    cin>>t;
    while(t--){
        ll n = 5, a[10];
        ll c1,c2,c3;
        ll b1,b2,b3;
        cin>>c1>>c2>>c3;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(c1 < a[0] || c2 < a[1] || c3 < a[2]){
            cout<<"NO"<<endl;
        }
        else{
            if(a[3] > 0){
                b1 = c1 - a[0];
                if(b1 >= a[3]){
                    a[0] += a[3];
                    a[3] = 0;
                }
                else{
                    a[0] = c1;
                    a[3] -= b1;
                }
            }
            if(a[4] > 0){
                b2 = c2 - a[1];
                if(b2 >= a[4]){
                    a[1] += a[4];
                    a[4] = 0;
                }
                else{
                    a[1] += b2;
                    a[4] -= b2;
                }
            }
            a[2] += (a[3] + a[4]);
            if((a[0] <= c1 && a[1] <= c2) && (a[2] <= c3)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
