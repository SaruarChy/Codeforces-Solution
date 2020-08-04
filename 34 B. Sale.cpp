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
    int n,m,a;
    cin>>n>>m;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a < 0){
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    n = v.size();
    if(n > m){
        swap(n,m);
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += (v[i] * -1);
    }
    cout<<sum<<endl;

    return 0;
}

