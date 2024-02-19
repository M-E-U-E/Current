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
    ll n, k;
    cin >> n >> k;
    ll x = log2(n)+1;
    for(int i=1; i<=x; i++)
    {
        ll p = pow(2,i);
        ll q = (n+(p/2))/p;
        if(k<=q)
        {
            if(k==1)
            {
                cout << p/2 << endl;
                return;
            }
            else
            {
                ll ans = (p/2)+((k-1)*p);
                cout << ans << endl;
                return;

            }
        }
        else
        {
            k-=q;
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

