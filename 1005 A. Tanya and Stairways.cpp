#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1010],step[1010];
    cin>>n;

    int c=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c++;
        }
    }

    memset(step,0,sizeof(step));
    int k=0;

    for(int i=0; i<n; i++){
        if(a[i]==1){
            step[k]++;
            for(int j=i+1; j<n; j++){
                if(a[j]==1){
                    break;
                }
                else{
                    step[k]++;
                }
            }
            k++;
        }
    }
    cout<<c<<"\n";
    for(int i=0; i<k; i++){
        cout<<step[i]<<" ";
    }
    cout<<"\n";

    return 0;

}
/*
SIMPLE INPUT
7
1 2 3 1 2 3 4

*/
