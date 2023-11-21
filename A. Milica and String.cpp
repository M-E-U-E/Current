#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll c = count(s.begin(), s.end(), 'B');

    if(c == k)
    {
        cout << 0 << endl;
        return;
    }

    else if(c > k)
    {
        cout << 1 << endl;

        ll toRemove = c - k;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                toRemove--;

                if(toRemove == 0)
                {
                    cout << i + 1 << " " << "A"<<endl;
                    return;
                }
            }
        }
    }

    else
    {
        cout << 1 << endl;
        int needed = k - c;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'A')
            {
                needed--;

                if(needed == 0)
                {
                    cout << i + 1 << " " << "B" <<endl;
                    return;
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

