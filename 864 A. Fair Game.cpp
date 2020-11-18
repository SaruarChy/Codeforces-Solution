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

    int n,a;
    set<int>s;
    map<int,int>mp;
    map<int,int>::iterator itr;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
        s.insert(a);
    }
    if(s.size() != 2){
        cout<<"NO"<<endl;
    }
    else{
        vector<int>v,ans;
        for(itr = mp.begin(); itr!=mp.end(); itr++){
            a = itr->second;
            v.pb(a);
            a = itr->first;
            ans.pb(a);
        }
        if(v.size() != 2){
            cout<<"NO"<<endl;
        }
        else{
            if(v[0] == v[1]){
                cout<<"YES"<<endl;
                cout<<ans[0]<<" "<<ans[1]<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}
