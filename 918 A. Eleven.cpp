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
    int t,n,a;
    cin>>n;
    int temp = 0;
    vector<int>v;
    v.pb(1);
    v.pb(1);
    for(int i=2; i<16; i++){
        temp = v[i-2] + v[i-1];
        v.pb(temp);
    }
    vector<int>:: iterator it;
    for(int i=1; i<=n; i++){
        int f = i;
        it = find(v.begin(),v.end(),f);
        if(it != v.end()){
            cout<<"O";
        }
        else{
            cout<<"o";
        }
    }
    cout<<endl;

    return 0;
}

