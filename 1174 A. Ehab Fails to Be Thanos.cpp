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
    int n,a[2002];
    cin>>n;
    n *= 2;
    set<int>s;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    sort(a,a+n);
    if( s.size() == 1){
        cout<<-1;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

