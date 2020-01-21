#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,sum=0;
    cin>>n;
    int p[n];
    for(i=0; i<n-1; i++)
        cin>>p[i];
    cin>>a>>b;
    a--;
    b--;
    for(i=a; i<b; i++)
        sum+=p[i];

    cout<<sum<<endl;

    return 0;
}
