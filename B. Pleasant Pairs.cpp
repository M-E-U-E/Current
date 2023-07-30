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
    ll a[n+4];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    ll c=0;
    for(int i=1; i<=n; i++)
    {
        for(int j = a[i]-i; j<=n; j+=a[i])
        {
            if(j>=0)
            {
                if((a[i]*a[j])==i+j && i<j)
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;

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



