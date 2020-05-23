//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int n,eights=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i] == '8'){
            eights++;
        }
    }
    if(eights >= n/11){
        cout<<n/11<<endl;
    }
    else if(eights < n/11 && n > 11){
        cout<<eights<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}

