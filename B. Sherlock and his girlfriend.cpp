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
const int N = 1e5+10;
bitset <N> vis;
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
    sieve();
    ll n;
    cin >> n;
    if(n==1)
    {
        cout << "1 1" << endl;
        return;
    }
    else if(n==2)
    {
        cout << "1 1 1" << endl;
    }
    else
    {
        cout << 2 << endl;
        for(int i=2; i<=n+1; i++)
        {
            if(vis[i])
            {
                cout << "2 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

