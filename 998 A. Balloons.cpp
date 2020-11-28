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
    int n,a[1001];
    vector< pair <int,int> >v;
    vector<int>idx;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        v.pb(make_pair(a[i],i+1));
    }
    if(n == 1){
        cout<<-1<<endl;
    }
    else{
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int Grigory = 0, Andrew = v[n-1].first;
        for(int i=0; i<n-1; i++){
            idx.pb(v[i].second);
            Grigory += v[i].first;
        }
        if(Grigory > Andrew){
            cout<<idx.size()<<endl;
            for(int i=0; i<idx.size(); i++){
                cout<<idx[i]<<" ";
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}

