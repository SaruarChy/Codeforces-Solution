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
    int sum = 0,temp = 0,noneed = 0,j = 1;
    for(int i=0; i<n; i++){
        sum += j;
        if(i == n-1){
            temp = j;
        }
        j += 2;
    }
    noneed = sum - temp;
    sum += noneed;
    cout<<sum<<endl;

    return 0;
}
