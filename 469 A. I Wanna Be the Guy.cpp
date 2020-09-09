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
    int n,p,a;
    set<int>s;
    cin>>n;
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>a;
        s.insert(a);
    }
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>a;
        s.insert(a);
    }
    if(n == s.size()){
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }
    return 0;
}
