#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int pos[204];
    int need[204];
    fill(pos,pos+204,0);
    fill(need,need+204,0);
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(pos[a[i]]==0){
            pos[a[i]]=1;
            v.push_back(a[i]);
        }
    }
    int s;
    s=v.size();
    sort(v.begin(),v.end());
//    for(int i=0; i<s; i++)
//        cout<<v[i]<<" ";
    int k=0;
    for(int i=0; i<s; i++){
        for(int j=0; j<n; j++){
            if(v[i]==a[j]){
                need[k]=need[k]+1;
            }
        }
        k++;
    }
    sort(need,need+k,greater<int>());
    cout<<need[0]<<endl;

    return 0;
}
