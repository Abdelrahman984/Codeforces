#include <bits/stdc++.h>
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
    int n, sum = 0;
    cin >> n;
    map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;
    while (n--)
    {
        string s;
        cin >> s;
        sum += m[s];
    }
    cout << sum;
}