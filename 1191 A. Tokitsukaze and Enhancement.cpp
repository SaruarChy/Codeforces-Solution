#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==1)
        cout<<0<<" "<<"A"<<endl;
    else if(n%4==2)
        cout<<1<<" "<<"B"<<endl;
    else if(n%4==3)
        cout<<2<<" "<<"A"<<endl;
    else if(n%4==0)
        cout<<1<<" "<<"A"<<endl;
    return 0;
}
