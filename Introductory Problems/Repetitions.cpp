#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 1, m = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            m = max(c, m);
            c = 1;
        }
    }
    cout << m << endl;
}