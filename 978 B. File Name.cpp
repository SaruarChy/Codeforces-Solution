#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,del=0,l=0;
    string s,s1;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        l=s1.length();
        if(s1[l-1]=='x' && s1[l-2]=='x' && s[i]=='x')
            del++;
        else{
            s1+=s[i];
        }
    }
    cout<<del<<endl;

}
