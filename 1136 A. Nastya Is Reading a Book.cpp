#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,page=0;
    int finish[10000];
    finish[0]=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int s,f;
        cin>>s>>f;
        finish[i]=f;
    }
    cin>>k;
    for(int i=1; i<=n; i++){
        if(k<=finish[i]){
            page=i;
            break;
        }
    }
    if(page==1){
        cout<<n<<endl;
    }
    else if(page>1){
        cout<<n-(page-1)<<endl;
    }
    return 0;
}
