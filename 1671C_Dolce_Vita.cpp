#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int tests, n, x;
    cin >> tests;
    for (int test = 0; test < tests; test++)
    {
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int bags = 0;
        long long totalCost = 0;
        for (int i = 0; i < n; i++)
        {
            if (totalCost + arr[i] > x)
                break;
            totalCost += arr[i];
            bags++;
        }
        long long ans = 0, lastDays = 0;
        for (int i = bags; i > 0; i--)
        {
            long long days = ((x - totalCost) / i) + 1;
            ans += (days - lastDays) * i;
            lastDays = days;
            totalCost -= arr[i - 1];
        }
        cout << ans << endl;
    }
    return 0;
}