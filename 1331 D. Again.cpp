#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l;
    l=s.length();
    if(s[l-1]%2==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;

    return 0;
}
