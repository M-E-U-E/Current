#include<bits/stdc++.h>
#define ll long long
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
    ll x = n;
    vector<ll> v;
    ll c = 0;
    for(int i=2; i*i<=x; i++)
    {
        if(n%i==0)
        {
            c++;
            n /= i;
            v.push_back(i);
        }
        if(c==2)
        {
            c++;
            v.push_back(n);
            break;
        }
    }
    if(c==3 && v[1]!=v[0] && v[1]!=v[2] && v[0]!=v[2])
    {
        cout << "YES" << endl;
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
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

