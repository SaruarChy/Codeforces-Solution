#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(!a && !b && !c)
    {
        cout << 0;
        return 0;
    }
    if(!c && a == b)
    {
        cout << 0;
        return 0;
    }
    if(a > b + c)
        cout << '+';
    else
    {
        if(b > a+c)
            cout << '-';
        else
            cout << '?';
    }
    return 0;
}
