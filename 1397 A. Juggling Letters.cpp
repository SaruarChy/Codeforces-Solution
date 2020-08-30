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
        cin>>n;
        int N = n;
        map<char,int>mp;

        while(N--){
            cin>>s;
            for(int i=0; i<s.length(); i++){
                mp[s[i]]++;
            }

        }
        int flag = 0;
        map<char,int>:: iterator it;
        for(it=mp.begin(); it!= mp.end(); it++){
            if(it->second % n == 0){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
