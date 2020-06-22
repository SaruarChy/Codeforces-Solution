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
    int t,n,a[2001],b[2001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>even,odd;
        for(int i=0; i<n*2; i++){
            cin>>a[i];
            if(a[i] % 2 == 0)
                even.pb(i+1);
            else
                odd.pb(i+1);
        }
        vector< pair <int,int> > ans;
        for(int i=0; i+1<even.size(); i+=2){
            ans.pb({even[i],even[i+1]});
        }
        for(int i=0; i+1<odd.size(); i+=2){
            ans.pb({odd[i],odd[i+1]});
        }

        for(int i=0; i<n-1; i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }

    }

    return 0;
}

