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
    int n;
    string s,Find;
    cin>>n>>s;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        int c = 0;
        for(int j=0; j<n-1; j++){
            if(s[i] == s[j] && s[i+1] == s[j+1]){
                c++;
            }
        }
        if(ans < c){
            ans = max(ans,c);
            Find = string(1,s[i]) + string(1,s[i+1]);
        }
    }
    cout<<Find<<endl;


    return 0;
}
