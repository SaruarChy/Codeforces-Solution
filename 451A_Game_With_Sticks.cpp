#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    cin>>n>>m;
    bool win = true;

    while(n>0 and m > 0)
    {
        if(win == true)
        {
            win = false;
        }
        else
        {
            win = true;
        }
        n--;
        m--;
    }
    if(win)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
}