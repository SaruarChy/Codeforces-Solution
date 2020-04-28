//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,pos=0,a[105];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i] <= k){
            c++;
        }
        else if(a[i] > k){
            pos=i+1;
            break;
        }
    }
    if(pos>0 && pos<n){
        for(int i=n-1; i>=pos; i--){
            if(a[i] <= k){
                c++;
            }
            else if(a[i] > k){
                break;
            }
        }
    }

    cout<<c<<"\n";

    return 0;
}
/*
SIMPLE INPUT
8 4
4 2 3 1 5 1 6 4
*/
