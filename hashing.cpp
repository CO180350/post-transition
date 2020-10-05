#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    unordered_set<int> us;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        us.insert(arr[i]);
    }
    int goal;
    cin >> goal;
    for (int i = 0; i < n; i++)
    {
        if (us.find(goal - arr[i]) != us.end())
        {
            cout << arr[i] << " Are the numbers " << goal - arr[i];
            cout << "Found!";
            exit(1);
        }
    }
}