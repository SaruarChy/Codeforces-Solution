#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,c=0,dif=0;
    long long int a[15];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
        if(a[i]!=a[i+1])
            c++;

    cout<<n-c<<endl;
    return 0;

}
