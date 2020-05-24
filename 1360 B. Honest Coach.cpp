//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = a[i] - a[i-1];
            v.push_back(dif);
        }

        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;

}
