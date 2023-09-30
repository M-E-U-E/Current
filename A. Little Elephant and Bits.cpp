#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    char c[111111];
    cin >> c;
    ll pos = -1;
    ll n = strlen(c);
    for (int i = 0; i < n; i++)
    {
        if (c[i] == '0')
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << c[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == pos)
            {
                continue;
            }
            else
            {
                cout << c[i];
            }
        }
        cout << endl;
    }
    return 0;
}
