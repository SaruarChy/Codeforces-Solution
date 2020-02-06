#include<bits/stdc++.h>
using namespace std;
//we have to find if we flew more times from San to Francisco
int main()
{
    int n,StoF=0,FtoS=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')//if you go San to Francisco
            StoF++;
        else if(s[i]=='F' && s[i+1]=='S') //if you go Francisco to San
            FtoS++;
    }
    if(StoF>FtoS)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
