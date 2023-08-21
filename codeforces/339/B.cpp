#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum = 0;
    long long r = 0;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            r = v[i] - 1;
        }
        else
        {
            sum = v[i] - v[i - 1];
            if (sum < 0)
            {
                sum += n;
            }
            r += sum;
        }
    }
    cout << r;
}