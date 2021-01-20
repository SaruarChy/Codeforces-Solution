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
        string b,s;
        cin>>n>>b;
        for(ll i=0; i<n; i++){
            if(i > 0){
                if(b[i] == '1'){
                    if(b[i-1] == '1' && s[i-1] == '1'){
                        s += '0';
                    }
                    else{
                        s += '1';
                    }
                }
                else{
                    if(s[i-1] == '0' && b[i-1] == '1'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '0'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '1'){
                        s += '1';
                    }
                    else if(s[i-1] == '0' && b[i-1] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                }
            }
            else{
                s += '1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
