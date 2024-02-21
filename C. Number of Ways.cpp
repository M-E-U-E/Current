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
    cin >> n;;
    ll a[n+5];;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
//    cerr << sum << endl;
    if(sum%3!=0)
    {
        cout << 0 << endl;;
    }
    else
    {
        ll one_third = sum/3;
        ll two_third = one_third*2;
        ll one_third_count = 0;
        ll ans = 0;
        ll total = 0;
        for(int i=0; i<n-1; i++)
        {
            total += a[i];
            if(total == two_third)
            {
                ans += one_third_count;
            }
            if(total == one_third)
            {
                one_third_count++;
            }
        }
        cout << ans << endl;
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
