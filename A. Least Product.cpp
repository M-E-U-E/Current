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
    cin >> n;
    ll a[n];
    int c=0;
    int zero=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<0)
        {
            c++;
        }
        else if(a[i]==0)
        {
            zero++;
        }
    }
    if(zero>0||c%2==1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout<< 1 << " " << 0 << endl;
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
