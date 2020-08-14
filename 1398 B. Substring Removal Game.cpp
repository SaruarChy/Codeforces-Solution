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
        cin>>s;
        n = s.length();
        int pos1 = -1,pos2 = -1;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                pos1 = i;
                break;
            }
        }
        for(int i=n-1; i>=pos1; i--){
            if(s[i] == '1'){
                pos2 = i;
                break;
            }
        }
        int k = 0,ans[101];
        fill(ans,ans+101,0);
        for(int i=pos1; i<=pos2; i++){
            if(s[i] == '1'){
                ans[k] += 1;
            }
            else{
                if(s[i-1] != '0')
                    k++;
            }

        }
        vector<int>v;
        for(int i=0; i<=k; i++){
            v.pb(ans[i]);
        }
        int alice = 0,bob = 0,turn = 1;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0; i<v.size(); i++){
            if(turn == 1){
                alice += v[i];
                turn = 0;
            }
            else{
                turn = 1;
            }
        }

        cout<<alice<<endl;
    }

    return 0;
}

