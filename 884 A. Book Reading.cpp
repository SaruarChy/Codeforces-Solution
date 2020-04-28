//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[86500],c=0,i,n;
    int t,day=86400;

    cin>>n>>t;

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        if( ( a[i]==0 ) && ( t>0 ) ){
            c++;
            t-=( day - a[i] );
        }
        else if( ( a[i] < day && a[i] > 0 ) && ( t > 0 ) ){
            t-=( day - a[i]);
            c++;
        }
        else if( ( a[i] >= day ) && ( t > 0 ) ){
            c++;
        }
    }

    cout<<c<<"\n";

    return 0;
}
/*
SIMPLE INPUT
2 2
86400 86398
*/
