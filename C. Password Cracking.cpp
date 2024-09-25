#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    else if (a.first == b.first and a.second < b.second)
        return true;

    return false;
}

const int N = 1e5 + 10;
bitset<N> vis;

void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}

void solve()
{
    int a;
    cin >> a;
    deque<char> an;
    bool dn = 0;
    while(an.size() < a)
    {
        if(dn)
        {
            cout << "? ";
            cout << '0';
            for(int i = 0; i < an.size(); i++)
            {
                cout << an[i];
            }
            cout << endl;
            cout.flush();
            int res;
            cin >> res;
            if(res)
            {
                an.push_front('0');
            }
            else
            {
                an.push_front('1');
            }
            continue;
        }

        cout << "? ";
        for(int i = 0; i < an.size(); i++)
        {
            cout << an[i];
        }
        cout << '0' << endl;
        cout.flush();
        int res;
        cin >> res;
        if(res)
        {
            an.push_back('0');
        }
        else
        {
            cout << "? ";
            for (int i = 0; i < an.size(); i++)
            {
                cout << an[i];
            }
            cout << '1' << endl;
            cout.flush();
            int res;
            cin >> res;
            if (res)
            {
                an.push_back('1');
            }
            else
            {
                dn = 1;
            }
        }
    }
    cout << "! ";
    for(int i = 0; i < an.size(); i++)
    {
        cout << an[i];
    }
    cout << endl;
    cout.flush();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
