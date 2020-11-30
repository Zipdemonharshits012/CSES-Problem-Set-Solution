#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < n - 1; i++)
    {
        int rand;
        cin >> rand;
        v[rand - 1] = 1;
    }
    for (int i = 0; i <= n - 1; i++)
    {

        if (v[i] == 0)
        {
            cout << i + 1;
            break;
        }
    }
}