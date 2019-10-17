#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i,cn=0,ln;
    scanf("%s",&s);
    ln=strlen(s);
    for(i=0; i<ln; i++)
    {
        if(s[i]=='4' || s[i]=='7')
            cn++;
    }
    if(cn==4 || cn==7)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
