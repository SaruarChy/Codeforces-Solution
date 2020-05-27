//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,a,zero = 0;
    cin>>n;

    set<int>s;
    for(int i=0; i<n; i++){
        cin>>a;
        s.insert(a);
        if(a == 0){
            zero++;
        }
    }
    if(zero > 0){
        cout<<s.size()-1<<endl;
    }
    else{
        cout<<s.size()<<endl;
    }
    return 0;
}

