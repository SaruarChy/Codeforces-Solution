#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    int n, zeros = 0;
    string s;
    bool ok = false;
    cin>>s;
    n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            ok = true;
        }
        else if(s[i] == '0' && ok == true){
            zeros++;
        }
    }
    if(zeros >= 6){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
    return 0;
}

