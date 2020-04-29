//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],positive=0,negative=0;
    cin>>n;

    int div=0;
    if(n%2 == 0){
        div = n/2;
    }
    else if( n%2 != 0){
        div = (n/2)+1;
    }

    for(int i=0; i<n; i++){
        cin>>a[i];
        if( a[i] > 0){
            positive++;
        }
        else if( a[i]  < 0 ){
            negative++;
        }
    }

    if( div <= positive ){
        cout<<1<<"\n";
    }
    else if( div <= negative){
        cout<<-1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;
}

/*
SIMPLE INPUT
5
10 0 -7 2 6
*/
