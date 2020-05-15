//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int n,sum=0;
    string s;
    cin>>s;
    n = s.length();
    for(int i=0; i<n; i++){
        sum += s[i] - '0';
    }
    if(sum == 0){
        cout<<0<<endl;
    }
    else if(sum == 1){
        cout<<n/2<<endl;
    }
    else{
        cout<<(n+1)/2<<endl;
    }

    return 0;
}
