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
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                ans += a[i];
            }
        }
        else
        {
            if(a[i]%2==1)
            {
                ans -= a[i];
            }
        }
    }
    cerr << ans << "\n";
    if(ans == 0)
    {
        cout << "Tie" << endl;
    }
    else if (ans>0)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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

