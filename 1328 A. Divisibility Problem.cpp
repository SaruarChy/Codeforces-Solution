#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        int div=0,pls=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }

        div=a/b;
        pls=(div+1)*b;
        cout<<pls-a<<endl;

    }
}
/*
SIMPLE INPUT
5
10 4
13 9
100 13
123 456
92 46
*/
