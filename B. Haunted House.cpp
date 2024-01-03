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
    string s;
    cin >> s;
    set<ll> st;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            st.insert(i);
        }
    }
    ll ans=0;
    for(int i=n-1; i>=0; i--)
    {
        if(st.size()==0)
        {
            cout << "-1 ";
            continue;
        }
        auto it=st.rbegin();
        ans+=(i-(*it));
        st.erase(*it);

        cout << ans << " ";
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
