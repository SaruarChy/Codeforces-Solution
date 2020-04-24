#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b,c,d;
    int ABsum,ABsub,CDsum,CDsub;
    cin>>t;
    while(t--)
    {
        ABsum=ABsub=CDsum=CDsub=0;
        cin>>n>>a>>b>>c>>d;
        ABsum=a+b;
        ABsub=a-b;

        CDsum=c+d;
        CDsub=c-d;

        if( (n*ABsum >= CDsub) && (n*ABsub <= CDsum) ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
/*
SIMPLE INPUT
5
7 20 3 101 18
11 11 10 234 2
8 9 7 250 122
19 41 21 321 10
3 10 8 6 1
*/
