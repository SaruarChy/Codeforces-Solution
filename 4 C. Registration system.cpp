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
    string s;
    map<string,int>mp;
    cin>>n;
    while(n--){
        cin>>s;
        if(mp.count(s) == 0){
            cout<<"OK"<<endl;
            mp[s] = 1;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
    return 0;
}
