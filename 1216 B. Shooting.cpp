#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    int n,sum=0;
    multimap<int, int> map;

    //insertion from user i/p
    cin>>n;
    int a,i=0,arr[1000],b[1000];
    for(i=1; i<=n; i++)
    {
       cin >> a;  
       map.insert(make_pair(a, i));
    }
    i=0;
    for(auto itr=map.begin(); itr != map.end(); itr++)
    {
        arr[i] = itr->first;
        b[i] = itr->second;
        i++;
    }
    int j = 0;
    for(i=n-1; i>=0; i--)
    {
        sum += arr[i]*j + 1;
        j++;
    }
    cout << sum << endl;
    for(i=n-1; i>=0; i--)
    {
        cout << b[i] << " ";
    }
}
