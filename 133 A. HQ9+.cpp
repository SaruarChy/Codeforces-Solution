#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int tag=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            tag=1;
            break;
        }
        else{
            tag=0;
        }
    }
    if(tag==1){
            cout<<"YES\n";
        }
    else{
        cout<<"NO\n";
    }

    return 0;
}
/*
SIMPLE INPUT
Hi!
*/
