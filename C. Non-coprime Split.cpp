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
ll getPrime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    if(r < 4)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(l < r)
        {
            if(r%2 != 0)
            {
                r--;
            }
            cout << 2 << " " << r-2 << endl;
        }
        else
        {
            ll prime = getPrime(l);
            if(prime == l)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << prime << " " << l-prime << endl;
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




