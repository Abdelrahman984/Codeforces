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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
            cout << "YES"
                 << "\n";
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}
