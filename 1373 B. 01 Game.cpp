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
    cin>>t;
    while(t--){
        int one = 0, zero = 0;
        string s;
        cin>>s;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == '1')one++;
            else zero++;
        }
        int turn = min(zero,one);
        if(turn == 0 || turn%2 == 0){
            cout<<"NET\n";
        }
        else
            cout<<"DA\n";
    }

    return 0;
}
