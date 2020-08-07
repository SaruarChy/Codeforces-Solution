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
    int n,_ = 0, o = 0;
    string s;
    cin>>s;
    n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == '-'){
            _++;
        }
        else{
            o++;
        }
    }
    if(o == 0 || _ == 0){
        cout<<"YES"<<endl;
    }
    else if(_ % o == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

