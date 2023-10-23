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
    int n, x, y, z, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if (x && y || x && z || y && z)
        {
            count++;
        }
    }
    cout << count;
}