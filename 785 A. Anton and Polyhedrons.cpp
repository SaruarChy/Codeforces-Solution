#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;

    char s0[]="Tetrahedron";
    char s1[]="Cube";
    char s2[]="Octahedron";
    char s3[]="Dodecahedron";
    char s4[]="Icosahedron";

    while(t--)
    {
        char m[15]="";
        cin>>m;
        if(0==strcmp(m,s0))
            ans+=4;
        if(0==strcmp(m,s1))
            ans+=6;
        if(0==strcmp(m,s2))
            ans+=8;
        if(0==strcmp(m,s3))
            ans+=12;
        if(0==strcmp(m,s4))
            ans+=20;
    }
    cout<<ans<<endl;

    return 0;
}
