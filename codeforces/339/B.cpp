#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    long long r = 0;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int it = 1;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = v[i] - it;
        if (sum < 0)
        {
            sum += n;
        }
        r += sum;
        it = v[i];
    }
    cout << r;
}