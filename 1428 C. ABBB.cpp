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
        string s;
        cin>>s;
        for(ll i=0; i<s.length(); i++){
            if(s[i] == 'A' && s[i+1] == 'B'){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
            else if(s[i] == 'B' && s[i+1] == 'B'){
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
                i -= 2;
            }
        }
        cout<<s.length()<<endl;
    }

    return 0;
}

