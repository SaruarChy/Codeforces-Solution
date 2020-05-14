//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int zero = 0,one=0;
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            zero++;
            one=0;
        }
        else if(s[i] == '1'){
            one++;
            zero=0;
        }
        if(zero >= 7 || one >=7){
            break;
        }
    }
    //cout<<zero<<" "<<one<<endl;
    if(one >= 7 || zero >= 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
