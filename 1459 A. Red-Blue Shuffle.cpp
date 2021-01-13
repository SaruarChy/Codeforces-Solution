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
        ll Red = 0,Blue = 0;
        string r,b;
        cin>>n>>r>>b;
        for(ll i=0; i<n; i++){
            if(r[i] > b[i])Red++;
            else if(r[i] < b[i])Blue++;
        }
        if(Red == Blue){
            cout<<"EQUAL\n";
        }
        else if(Red > Blue){
            cout<<"RED\n";
        }
        else{
            cout<<"BLUE\n";
        }

    }
    return 0;
}


