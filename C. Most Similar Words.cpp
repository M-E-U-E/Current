
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
    ll n, m;
    cin >> n >> m;
    string a[n];
    ll ans = 10000;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll dis=0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            ll sum = 0;
            for(int k = 0; k < m; k++)
            {
                dis = abs(a[i][k] - a[j][k]);
                sum+=dis;
            }
            if(sum < ans)
            {
                ans = sum;
            }
        }
    }

    cout<< ans;

    cout<<endl;

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



