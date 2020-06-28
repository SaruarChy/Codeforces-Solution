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
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        int ans = 0,open = 0,close = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(' && s[i+1] == ')'){
                i++;
                continue;
            }
            if(s[i] == '('){
                open++;
            }
            if(s[i] == ')'){
                close++;
                if(open < close)
                    ans++,close--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

