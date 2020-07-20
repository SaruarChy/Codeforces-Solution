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
    ll n,ans = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i+=2){
        if(s[i] == 'a' && s[i+1] == 'a'){
            s[i+1] = 'b';
            ans++;
        }
        else if(s[i] == 'b' && s[i+1] == 'b'){
            s[i] = 'a';
            ans++;
        }
    }
    cout<<ans<<endl;
    cout<<s<<endl;
    return 0;
}
