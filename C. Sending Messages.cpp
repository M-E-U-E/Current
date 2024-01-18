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

    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    ll v[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    ll x=0, y=0, c=0;
    for(int i=0; i<n; i++)
    {
        x=v[i]-c;
        y=a*x;
        if(y>b)
        {
            f-=b;
        }
        else
        {
            f-=y;
        }
        c=v[i];
    }
    if(f>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();

    }

    return 0;
}
