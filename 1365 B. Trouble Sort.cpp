//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    int n,a[100001],b[100001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        set<int>s;
        for(int i=0; i<n; i++){
            cin>>b[i];
            s.insert(b[i]);
        }
        if(s.size() == 1){
            if(is_sorted(a,a+n)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else{
            cout<<"Yes\n";
        }
    }
    return 0;
}
