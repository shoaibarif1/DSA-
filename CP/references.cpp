#include <bits/stdc++.h>
using namespace std;
void increment(int &n)
{
    n++;
}
int main()
{
    int a = 3;
    cout << a << endl;

    int increment(a);
    cout << a << endl;
}