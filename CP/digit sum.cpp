/*
        author:Shoaibarif
        created on: 20.March.2023 at 20:05:20
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
    string s;
    cin >> s;
    int sum{};
    for (i = 0; i < s.length; i++)
    {
        sum += s[i] - 48;
    }
    cout << sum << line;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}