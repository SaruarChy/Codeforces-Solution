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
    int n,k = 3;
    string s,t;
    cin>>n>>s;
    if(n >= 2){
        t += s[0];
        t += s[1];
    }
    else{
        t += s[0];
    }
    for(int i=3; i<n;){
        t += s[i];
        i += k;
        k++;
    }
    cout<<t<<endl;
    return 0;
}

