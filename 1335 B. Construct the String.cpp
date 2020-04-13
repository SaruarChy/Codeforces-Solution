#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
    }
    return 0;
}
/*
SIMPLE INPUT
4
7 5 3
6 1 1
6 6 1
5 2 2

*/
