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

    int l1,l2;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    l1 = s1.length();
    l2 = s2.length();

    string s,t;
    for(int i=0; i<l1; i++){
        if(isalpha(s1[i])){
            s += s1[i];
        }
    }
    for(int i=0; i<l2; i++){
        if(isalpha(s2[i])){
            t += s2[i];
        }
    }
    //cout<<s<<endl<<t<<endl;
    l1 = s.length();
    l2 = t.length();
    int Found = 0;
    bool flag = false;
    for(int i=0; i<l2; i++){
        for(int j=0; j<l1; j++){
            if(isalpha(s[j])){
                if(t[i] == s[j]){
                    Found = 1;
                    s[j] = '_';
                    t[i] = '+';
                    break;
                }
            }
        }
        if(Found == 1){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    //cout<<s<<endl<<t<<endl;
    for(int i=0; i<l2; i++){
        if(isalpha(t[i])){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

