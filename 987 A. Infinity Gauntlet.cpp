#include<bits/stdc++.h>
using namespace std;
int main()
{
    string gems[]={"purple","green","blue","orange","red","yellow"};
    string names[]={"Power","Time","Space","Soul","Reality","Mind"};
    map<string,bool>mp;
    vector<string>v;
    int n,m=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]=1; //mark gems after scanf()
    }
    for(int i=0; i<6; i++){
        if(!mp[gems[i]]){ //if mp is false than it will store which gems is need
            v.push_back(names[i]);
        }
    }
    m=v.size();
    cout<<m<<endl;

    for(int i=0; i<m; i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
