#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,l2,len,c=0;
    string s,t;
    cin>>s>>t;
    l1=s.length();
    l2=t.length();
    len=l1+l2;
//    cout<<l1<<" "<<l2<<"\n";
    if(s[l1-1] != t[l2-1]){
        cout<<len<<"\n";
    }

    else{
        l1--,l2--;
//        cout<<l1<<" "<<l2<<"\n";
        while(l1>=0 && l2>=0){
            if(s[l1] == t[l2]){
                c++;
                l1--,l2--;
            }
            else  if( (s[l1] != t[l2]) || (l1==-1 || l2==-1) ){
               break;
            }
        }
        cout<<len-(c*2)<<"\n";
    }

    return 0;
}
/*
SIMPLE INPUT
codeforces
yes
*/
