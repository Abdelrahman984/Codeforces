#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main()
{
    fast();
    int n, x = 0, y = 0, coins = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            x++;
        }
        else
        {
            y++;
        }
        if (x == y && s[i] == s[i + 1])
        {
            coins++;
        }
    }
    cout << coins;
}