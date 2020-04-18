#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[250],b[250];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());

    cout<<a[0]<<" "<<b[0]<<"\n";

    return 0;
}

/*
SIMPLE INPUT
1
20
2
10 20
*/
