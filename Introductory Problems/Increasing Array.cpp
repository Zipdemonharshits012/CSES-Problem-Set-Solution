#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] < v[i])
        {
            sum += v[i] - v[i + 1];
            v[i + 1] = v[i];
        }
    }
    cout << sum;
}