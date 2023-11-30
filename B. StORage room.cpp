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
    cin >> n ;
    ll a[n+6][n+6];
    set<ll>st;
    vector<ll>v, v1;
    ll c=-1;
    for(int i=0; i<n; i++)
    {
        c=-1;
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
            if(i!=j)
            {
                c&=a[i][j];
            }

        }
        v.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[i][j] != (v[i]|v[j]))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(n==1)
    {
        cout << "YES" << endl;
        cout << 7 << endl;
        return;
    }
//
//    if(v1.size()!=n)
//    {
//        cout << "NO" << endl;
//        return;
//    }
    cout << "YES" << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

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


