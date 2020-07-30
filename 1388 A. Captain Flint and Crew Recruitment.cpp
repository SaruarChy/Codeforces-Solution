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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;

        if(n < 31){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            ll ok = n - 30;
            if( (ok != 14 && ok != 10 )&& (ok != 6)){
                cout<<"14 10 6 "<<ok<<endl;
            }
            else{
                cout<<"6 10 15 "<<n - 31<<endl;
            }
        }
    }

    return 0;
}
