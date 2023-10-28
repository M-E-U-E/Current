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
    map<ll, ll> mp;
    for(ll j = 0; j < n; j++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    if(mp.size()==1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if(mp.size()>2)
        {
            cout << "No" << endl;
        }
        else
        {
            auto it1 = mp.begin();
            auto it2 = mp.begin();
            it2++;
            ll s = abs((*it1).second - (*it2).second);
            if(s <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
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
