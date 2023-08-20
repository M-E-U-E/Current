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

    ll n, i;
    cin >> n;
    ll a[n+5], b[n+5];
    map<ll,ll> mp;
    vector<ll>ones, zeros;
    for( i=0; i<n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
        mp[a[i]]=i;
    }
    string s;
    cin >> s;
    for( i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            zeros.push_back(a[i]);
        }
        else
        {
            ones.push_back(a[i]);
        }
    }
    sort(a,a+n);
    sort(zeros.begin(),zeros.end());
    sort(ones.begin(),ones.end());

    reverse(a,a+n);
    reverse(zeros.begin(),zeros.end());
    reverse(ones.begin(),ones.end());
     i;
    for( i=0; i<ones.size(); i++)
    {
        b[mp[ones[i]]]=a[i];
    }

    for( int j=0; j<zeros.size(); j++)
    {
        b[mp[zeros[j]]]=a[i];
        i++;
    }
    for( i=0; i<n; i++)
    {
        cout << b[i] << " ";
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




