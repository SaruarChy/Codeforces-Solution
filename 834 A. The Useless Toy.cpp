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
    string s,e;
    ll n;
    cin>>s>>e>>n;
    n %= 4;
    if(n % 2 == 0){
        cout<<"undefined"<<endl;
        return 0;
    }
    string f = "v<^>";
    string f2 = f;
    reverse(f2.begin(),f2.end());
    int l = f.length();
    int c = 0,c2 = 0;
    for(int i=0; i<l; i++){
        if(s[0] == f[i]){
            for(int j=i; j<l; j++){
                if(e[0] == f[j]){
                    break;
                }
                else{
                    c++;
                }
                if(j == l-1){
                    j = -1;
                }
            }
        }
    }
    if(c == n){
        cout<<"cw"<<endl;
        return 0;
    }
    for(int i=0; i<l; i++){
        if(s[0] == f2[i]){
            for(int j=i; j<l; j++){
                if(e[0] == f2[j]){
                    break;
                }
                else{
                    c2++;
                }
                if(j == l-1){
                    j = -1;
                }
            }
        }
    }
    if(c == n){
        cout<<"cw"<<endl;
    }
    else if(c2 == n){
        cout<<"ccw"<<endl;
    }
    else{
        cout<<"undefined"<<endl;
    }
    return 0;
}

