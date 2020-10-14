#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int>mp;
    map<char,int>:: iterator itr;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int flag = 0;
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        int a = itr->second;
        //cout<<a<<" ";
        if(a > k){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}

