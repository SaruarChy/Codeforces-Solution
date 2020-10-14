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
    string s,pass;
    cin>>pass>>n;
    if(n == 1){
        cin>>s;
        if(pass == s){
            cout<<"YES"<<endl;
        }
        else{
            reverse(s.begin(),s.end());
            if(pass == s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
    }
    int flag = 0,okf = 0, okl = 0;
    while(n--){
        cin>>s;
        if(pass[0] == s[1]){
            okf = 1;
        }
        if(pass[1] == s[0]){
            okl = 1;
        }
        if(pass == s){
            flag = 1;
        }
    }
    if(flag == 1 || (okf == okl && okf == 1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}

