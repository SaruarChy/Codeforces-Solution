//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int n, a, one = 0;

    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        if(a == 1)one++;
    }
    sort(v.begin(),v.end());
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    int ans = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[j] % v[i] == 0){
                v.erase(v.begin()+j);
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[j] % v[i] == 0){
                v.erase(v.begin()+j);
            }
        }
    }
    if(one > 0){
        cout<<1<<endl;
    }
    else{
        cout<<v.size()<<endl;
    }
//    for(int i=0; i<v.size(); i++){
//        cout<<v[i]<<" ";
//    }
    cout<<endl;

}
