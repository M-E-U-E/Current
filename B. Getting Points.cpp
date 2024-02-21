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

    ll n, p, l, x;
    cin >> n >> p >> l >> x;
    ll a = (n+6)/7;
    ll low = 0;
    ll high = n;
    ll ans;
    while(low<=high)
    {
        ll mid = (high+low)/2;
        ll g = (mid*l) + x*min(2*mid, a);
        if(p<=g)
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cerr << ans << endl;
    cout << n-ans << endl;
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
//     ll n, p, l, x;
//     cin >> n >> p >> l >> x;
//     ll a = 0;
//     ll c=-1;
//     while(p>a)
//     {
//         a+=l;
//         c++;
//         if(c%7==1)
//         {
//             a+=x;
//         }
//     }
//     cout << n-c << endl;
