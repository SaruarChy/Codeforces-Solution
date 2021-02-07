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
        int turn = 1;
        string s;
        cin>>s;
        n = s.length();
        for(int i=0; i<n; i++){
            if(turn == 1){
                if(s[i] == 'a')s[i] = 'b';
                else if(s[i] != 'a')s[i] = 'a';
                turn = 2;
            }
            else if(turn == 2){
                if(s[i] == 'z')s[i] = 'y';
                else if(s[i] != 'z')s[i] = 'z';
                turn = 1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
