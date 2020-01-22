#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int c=0,d=0;
    cin>>a>>b;
    if(a==b)
        cout<<a<<" "<<0<<endl;
    else
    {
        if(a<b)
            swap(a,b);
        while(a>1 && b>0)
        {
            a--;
            b--;
            c++;
        }
        if(a>1)
            d=a/2;
        cout<<c<<" "<<d<<endl;
    }
}
