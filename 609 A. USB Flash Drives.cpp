#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101];
    long long int m,sum=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    int c=0;
    for(int i=0; i<n; i++){
        c++;
        sum+=a[i];
        if(sum>=m){
            break;
        }
    }
    cout<<c<<endl;

    return 0;
}
/*
SIMPLE INPUT
3
5
2
1
3
*/
