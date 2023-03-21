/*
        author:Shoaibarif
        created on: 17.March.2023 at 21:03:25
*/

#include <bits/stdc++.h>
#define line "\n"
#define all(c) (c).begin(), (c).end()
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
typedef long long ll;
typedef long double ld;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int even{}, odd{};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2)
            odd++;
        else
            even++;
    }
    cout << min(odd, even) << line;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}