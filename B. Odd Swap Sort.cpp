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
    ll a[n+5];
    vector<ll>v1, v2, even, odd;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2)
        {
            v1.push_back(a[i]);
            odd.push_back(a[i]);
        }
        else
        {
            v2.push_back(a[i]);
            even.push_back(a[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1==odd && v2==even)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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


