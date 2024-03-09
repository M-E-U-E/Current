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
    ll k, n, m;
    cin >> k >> n >> m;
    vector<ll> a(n), b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    ll i=0,j=0;
    vector<ll>ans;
    while(i<n || j<m)
    {
        if(i<n && j<m)
        {
            if(a[i]==0)
            {
                ans.push_back(0);
                i++;
                k++;
            }
            else if(b[j]==0)
            {
                ans.push_back(0);
                j++;
                k++;
            }
            else
            {
                if(a[i]<b[j] && a[i]<=k)
                {
                    ans.push_back(a[i]);
                    i++;
                }
                else if(a[i]>=b[j] && b[j]<=k)
                {
                    ans.push_back(b[j]);
                    j++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if(i<n)
        {
            if(a[i]==0)
            {
                ans.push_back(0);
                i++;
                k++;
            }
            else
            {
                if(a[i]<=k)
                {
                    ans.push_back(a[i]);
                    i++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if(j<m)
        {
            if(b[j]==0)
            {
                ans.push_back(0);
                j++;
                k++;
            }
            else
            {
                if(b[j]<=k)
                {
                    ans.push_back(b[j]);
                    j++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    for(auto i : ans)
    {
        cout << i << " ";
    }
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



