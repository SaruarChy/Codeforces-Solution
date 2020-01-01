#include<bits/stdc++.h>
using namespace std;
int removezeros(int num)
{
    int retrn=0;
    int ten=1;
    while(num)
    {
        int mod=num%10;
        num/=10;
        if(mod)
        {
            retrn+=mod*ten;
            ten*=10;
        }
    }
    return retrn;
}
int main()
{
    long long int a,b,c,i;
    cin>>a>>b;
    c=a+b;
    a=removezeros(a);
    b=removezeros(b);
    c=removezeros(c);
    if(a+b==c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
