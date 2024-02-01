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
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    ll mx= 0;
    for(int i=1; i<=(2*n); i++)
    {
        ll sum = 0;
        for(auto j : mp)
        {
            ll p = i-(j.first);
            if(p>=1 && mp.count(p))
            {
                sum += min(j.second,mp[p]);
            }
        }
        sum /= 2;

        mx = max(mx, sum);
    }
    cout << mx << endl;
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


