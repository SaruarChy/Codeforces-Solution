#include<bits/stdc++.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;

Copy_maris_nah
{
    int t;
    long long int a,b,n,s,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>n>>s;

        long long int d = s / n;
		d = min(d, a);

		if (s - n * d <= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
    }
    Okay_bye;
}
