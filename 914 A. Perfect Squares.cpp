//Bismillahir Rahmanir Rhaim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans=-1000005,n,a,i,j;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a;
        if(a < 0){
            ans = max(ans,a);
        }
        else{
            int tag=0;
            for(j=0; j*j <= a; j++)if(j*j == a)tag=1;
            if(tag == 0)ans = max(ans,a);
        }
    }
    cout<<ans<<endl;
}
