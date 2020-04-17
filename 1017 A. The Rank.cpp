#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    int a,b,c,d;
    int s[1001];
    cin>>n;
    for(i=0; i<n; i++){
        int sum=0;
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        s[i]=sum;
    }
//    for(i=0; i<n; i++){
//        cout<<s[i]<<" ";
//    }
    int Smith=s[0];
    sort(s,s+n,greater<int>());
    for(int i=0; i<n; i++){
        if(Smith==s[i]){
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}

/*
SIMPLE INPUT
5
100 98 100 100
100 100 100 100
100 100 99 99
90 99 90 100
100 98 60 99

*/
