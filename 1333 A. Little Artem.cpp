#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[101][101];
        a[0][0]='a';
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1 && j==1)
                    a[i][j]='W';
                else
                    a[i][j]='B';
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
