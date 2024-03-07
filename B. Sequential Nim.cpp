
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
    ll one=0, f=1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(f && a[i]==1)
        {
            one++;
        }
        else
        {
            f=0;
        }
    }
    if(one==n)
    {
        if(one%2)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
        return;
    }
    if(one%2==0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
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

