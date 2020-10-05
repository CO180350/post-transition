#include <bits/stdc++.h>
using namespace std;

#define l long long int

int max(int arr[], int st, int end)
{
    if (st == end)
        return 0;
    int ans = -1;
    for (int i = st; i < end; i++)
    {
        ans = ans > arr[i] ? ans : arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lmax = max(arr, 0, i);
        int rmax = max(arr, i + 1, n);
        int min = lmax > rmax ? rmax : lmax;
        sum += min - arr[i];
    }
    cout << sum;
}