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
vector<ll> cop[1111];


void solve()
{
    ll n;
    cin >> n;
    ll a[n+5];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    vector<int> mxIndx(1111,-1);

    for(int i=1; i<=n; i++)
    {
        mxIndx[a[i]]=i;
    }
    int ans=0;
    for(int i=1; i<=1000; i++)
    {
        if(mxIndx[i]==-1)continue;

        if(i==1)
        {
            ans=max(ans,2*mxIndx[i]);
            continue;
        }
        for(auto p:cop[i])
        {
            if(mxIndx[p]!=-1)
            {
                ans=max(ans,mxIndx[i]+mxIndx[p]);
            }
        }
    }
    if(ans)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                cop[i].push_back(j);
            }
        }
    }
    while(t--)
    {
        solve();

    }
    return 0;
}



