#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(vector<int> t, vector<vector<int>> &z)
{
    z.push_back(t);
    int count = INT_MIN;
    while (count != 0)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < t.size(); i++)
        {
            m[t[i]]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            t[i] = m[t[i]];
        }
        count = 0;
        for (auto i : m)
        {
            if (i.first != i.second)
            {
                count++;
            }
        }
        if (count == 0)
        {
            return;
        }
        z.push_back(t);
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {


        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int q;
        cin >> q;
        vector<pair<int, int>> a;
        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            a.push_back(make_pair(x, y));
        }

        vector<vector<int>> z;
        solve(v, z);
        for (int i = 0; i < q; i++)
        {
            if (a[i].second < z.size())
            {
                cout << z[a[i].second][a[i].first - 1] << endl;
            }
            else
            {
                int x = z.size();
                cout << z[x - 1][a[i].first - 1] << endl;
            }
        }
    }

    return 0;
}
