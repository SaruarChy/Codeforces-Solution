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
    ll n,a[11];
    string s;
    cin>>n>>s;
    fill(a,a+11,0);
    for(int i=0; i<n; i++){
        if(s[i] == 'L'){
            for(int j=0; j<n; j++){
                if(a[j] != 1){
                    a[j] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R'){
            for(int j=9; j>=0; j--){
                if(a[j] != 1){
                    a[j] = 1;
                    break;
                }
            }
        }
        else{
            a[s[i] - '0'] = 0;
        }
    }
    for(int i=0; i<=9; i++){
        cout<<a[i];
    }
    cout<<endl;


    return 0;
}
