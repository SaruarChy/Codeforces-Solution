#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,sum;
    cin>>n>>k;
    long int red,green,blue;
    red=ceil( ( ( 2 * n ) + k - 1 ) / k );
    green=ceil( ( ( 5 * n ) + k - 1 ) / k );
    blue=ceil( ( ( 8 * n ) + k - 1 ) / k );
    sum=red+green+blue;
    cout<<sum<<"\n";
}
