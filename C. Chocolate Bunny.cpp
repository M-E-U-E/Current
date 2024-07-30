#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    auto query = [&](int i, int j)
    {
        cout << "? " << i << " " << j << endl;
        fflush(stdout);
        int q;
        cin >> q;
        return q;
    };

    int n;
    cin >> n;
    vector<int> id(n + 1);
    int i = 1, j = n;
    while (i < j)
    {
        int a = query(i, j);
        int b = query(j, i);
        if (a < b) id[j] = b, j -= 1;
        else id[i] = a, i += 1;
    }
    id[i] = n;
    cout << "! ";
    for (int i = 1; i <= n; ++i)
    {
        cout << id[i] << ' ';
    }
    cout << endl;
    fflush(stdout);

    return 0;
}
