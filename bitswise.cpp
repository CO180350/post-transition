#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void power_of_two()
{
    ll n;
    cin >> n;
    if (!(n & (n - 1)))
        cout << "True";
    else
        cout << "False";
}

// single number
void odd_occouring_elements()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        ans = ans ^ temp;
    }
    cout << ans;
}
// double number
void odd_occouring_elements_two()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        ans = ans ^ temp;
    }
    cout << ans;
}

void powerset()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = (1 << n);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) > 0)
                cout << s[i];
        }
        cout << "\t";
    }
}

int main()
{
    // power_of_two();
    // odd_occouring_elements();
    powerset();
}