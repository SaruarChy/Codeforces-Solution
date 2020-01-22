#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }
        if(n%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
