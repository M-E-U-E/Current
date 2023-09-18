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
    ll n,i,k,x;
    cin >> n >> k >> x;
    if(k>n||x<k-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll ans=(k*(k-1))/2;
        if(x!=k)
            ans += (n-k)*x;
        else
        {
            ans+=(n-k)*(x-1);
        }
        cout << ans << endl;
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

