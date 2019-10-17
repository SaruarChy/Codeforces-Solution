#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005],*t;
    cin>>s;
    if((t=strstr(s,"AB")) && (strstr(t+2,"BA")))
    {
        cout<<"YES"<<endl;
    }
    else if((t=strstr(s,"BA")) && (strstr(t+2,"AB")))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}
