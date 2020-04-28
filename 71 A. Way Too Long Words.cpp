//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l;
    char s[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&s);
        l=strlen(s);
        if(l>10)
        {
            printf("%c",s[0]);
            printf("%d",l-2);
            printf("%c\n",s[l-1]);
        }
        else
            printf("%s\n",s);
    }
    return 0;
}
/*
SIMPLE INPUT
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/
