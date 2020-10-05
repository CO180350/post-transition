#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    ll prefix[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            prefix[i] = arr[i];
        else
            prefix[i] = arr[i] + prefix[i - 1];
    }
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] == 0)
            m = i;
        for (int j = 0; j < i; j++)
        {
            if (prefix[i] - prefix[j] == 0)
            {
                m = m > (i - j) ? m : (i - j);
            }
        }
    }
    cout << m;
}