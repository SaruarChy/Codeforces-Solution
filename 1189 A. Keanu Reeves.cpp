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
    int n;
    string s;
    cin>>n>>s;
    int zero = 0,one = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '0')zero++;
        else one++;
    }
    if(zero != one){
        cout<<1<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(int i=1; i<n; i++){
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}

