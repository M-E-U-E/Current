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
    ll even=0, odd=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even == n)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
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

