#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int ans = 0;


    int x = a+b+c;
    ans = max(ans,x);

    int y = a*b*c;
    ans = max(ans,y);

    int z = (a+b)*c;
    ans = max(ans,z);

    int t = a*(b+c);
    ans = max(ans,t);

    int u = a+(b*c);
    ans = max(ans,u);

    int v = (a*b)+c;
    ans = max(ans,v); 

    cout<<ans<<endl;
    return 0;
}