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
    ll n;
    cin >> n;
    vector<ll> cnt(30, 0);
    for(int i=0; i<n; i++)
    {
        ll t, v;
        cin >> t >> v;
        if(t==1)
        {
            cnt[v]++;
        }
        else
        {
            ll i=29;
            while(i>=0)
            {
                if(cnt[i])
                {
                    ll k = v/pow(2,i);
                    ll p = min(k, cnt[i]);
                    v -= p*pow(2,i);
                }
                i--;
            }
            if(v)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }

        }
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





