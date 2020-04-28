//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans=0;
    int a,b,c,d,e,f,s1,s2;
    cin>>a>>b>>c>>d>>e>>f;

    if(e >= f){
        while( a > 0 || d > 0 ){
            s1=min(a,d);
            ans+=s1*e;
            a-=s1,d-=s1;

            s2=min(b,min(c,d));
            ans+=s2*f;
            b-=s2,c-=s2,d-=s2;

            if(b == 0 || c == 0 || d == 0){
                break;
            }
        }

    }
    else if(f > e){
        while( d > 0 ){
            s2=min(b,min(c,d));
            ans+=s2*f;
            b-=s2,c-=s2,d-=s2;

            s1=min(a,d);
            ans+=s1*e;
            a-=s1,d-=s1;

            if(b == 0 || c == 0 || d == 0){
                break;
            }
        }

    }

    cout<<ans<<"\n";
    //cout<<s1<<" "<<s2<<endl;
    return 0;
}
/*
SIMPLE INPUT
4
5
6
3
1
2
*/
