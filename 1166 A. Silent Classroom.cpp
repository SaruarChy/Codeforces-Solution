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
    ll n;
    char c;
    map<char,int>mp;
    map<char,int>:: iterator itr;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        c = s[0];
        mp[c]++;
    }
    int a,fst,snd,sum = 0;
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        //cout<<itr->second<<" ";
        a = itr->second;
        fst = (a / 2) + (a % 2);
        snd = a/2;
        //fst--,snd--;
        //cout<<fst<<" "<<snd<<endl;
        while(fst--){
            sum += fst;
        }
        while(snd--){
            sum += snd;
        }
    }
    cout<<sum<<endl;

    return 0;
}
