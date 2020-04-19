#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r;
    string s,c1,c2;
    cin>>n>>m;
    cin>>s;
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(int i=l-1; i<r; i++){
            if(s[i]==c1[0]){
                s[i]=c2[0];
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
/*
SIMPLE INPUT
3 1
ioi
1 1 i n
*/
