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
        string s;
        cin>>n>>s;
        if((s[0] == '2' && s[1] == '0') && (s[n-2] == '2' && s[n-1] == '0')){
            cout<<"YES"<<endl;
        }
        else if((s[0] == '2' && s[n-3] == '0') && (s[n-2] == '2' && s[n-1] == '0')){
            cout<<"YES"<<endl;
        }
        else if((s[n-4] == '2' && s[n-3] == '0') && (s[n-2] == '2' && s[n-1] == '0')){
            cout<<"YES"<<endl;
        }
        else if((s[0] == '2' && s[1] == '0') && (s[2] == '2' && s[3] == '0')){
            cout<<"YES"<<endl;
        }
        else if((s[0] == '2' && s[1] == '0') && (s[2] == '2' && s[n-1] == '0')){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

