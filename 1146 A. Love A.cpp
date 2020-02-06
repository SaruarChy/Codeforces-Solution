#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len=0,As=0,good=0;
    string s;
    cin>>s;
    len=s.length();
    for(int i=0; i<len; i++)
        if(s[i]=='a')
            As++;
            //bug
//    good=len/2;
//    if(good==As)
//        cout<<len-2<<endl;
//    else if(good<As)
//        cout<<len<<endl;
//    else if(good>As)
//        cout<<As+1<<endl;
    cout<<min(len,2*As-1)<<endl;

    return 0;
}
