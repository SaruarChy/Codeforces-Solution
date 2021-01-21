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
    ll n, m = 0, a;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(i == 0){
            cout<<a<<" ";
            m = a;
        }
        else{
            cout<<a+m<<" ";
            m = max(m,(a+m));
        }
    }
    cout<<endl;

    return 0;
}

