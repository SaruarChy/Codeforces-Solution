#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    //freopen("input.txt","r", stdin);

    int n,p,m,a,b,c,d,e;
    string s,t;
    map<string,int>mp;
    map<string,int>:: iterator itr;

    int score = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s>>p>>m>>a>>b>>c>>d>>e;
        score = ((p * 100) + ( a + b + c + d + e)) - (m * 50);
        mp[s] = score;
    }

    int maxScore = -100000,temp = 0;
    for(itr = mp.begin(); itr!= mp.end(); itr++){
        temp = itr->second;
        if(temp > maxScore){
            maxScore = temp;
            t = itr->first;
        }
        else if(temp < 0){
            if(maxScore < 0 && temp > maxScore){
                maxScore = temp;
                t = itr->first;
            }
        }
    }
    cout<<t<<endl;

    return 0;
}
