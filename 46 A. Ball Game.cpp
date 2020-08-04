//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    cin>>n;
    int N = n;
    n -= 1;
    int go = 1,i = 1;
    while(n--){
        go += i;
        if(go % N == 0){
            go = go;
        }
        else{
            go %= N;
        }
        cout<<go<<" ";
        i++;
    }
    cout<<endl;

    return 0;
}

