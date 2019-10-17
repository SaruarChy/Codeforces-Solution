#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        int s=0;
        cin>>a>>b>>c;
        while(b>=1 && c>=2)
        {
            s+=3;
            b=b-1;
            c=c-2;
        }
        while(b>=2 && a>=1)
        {
            s+=3;
            b=b-2;
            a=a-1;
        }
        cout<<s<<endl;
    }
}
