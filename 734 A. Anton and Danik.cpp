#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,wonAnton=0,wonDanik=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            wonAnton++;
        else if(s[i]=='D')
            wonDanik++;
    }
    if(wonAnton==wonDanik)
        cout<<"Friendship"<<endl;
    else if(wonAnton>wonDanik)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;
}
