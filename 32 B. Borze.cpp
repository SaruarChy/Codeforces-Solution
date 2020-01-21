#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    int len=s.length();
    int a[len+5];
    for(i=0; i<len; i++)
    {
        if(s[i]=='.')
            cout<<0;
        else
        {
            if(s[i+1]=='.')
                cout<<1;
            else
                cout<<2;
                i++;
        }
    }
    cout<<endl;

    return 0;
}
