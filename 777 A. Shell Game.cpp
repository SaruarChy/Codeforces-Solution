#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    n%=6;
    int a[4];
    a[0]=0,a[1]=1,a[2]=2;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            swap(a[0],a[1]);
        else
            swap(a[1],a[2]);
    }
    cout<<a[x]<<endl;
    return 0;
}
