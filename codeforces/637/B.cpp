#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    map<string, string> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[arr[i]] == "")
        {
            cout << arr[i] << "\n";
        }
        mp[arr[i]] = arr[i];
    }
}