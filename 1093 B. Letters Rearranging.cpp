//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,r;
    cin>>t;
    while(t--)
    {
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());
        int len=s.length();
        int tag=0;
        set<char>S;
        for(int i=0; i<len; i++){
            if(s[i]==r[i])
                tag=1;
            S.insert(s[i]);
        }
        if(tag==0){
            cout<<s<<endl;
        }
        else if(S.size()==1){
            cout<<-1<<endl;
        }
        else if(tag == 1){
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

