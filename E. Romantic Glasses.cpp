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
    ll a[n+5];
    set<ll>st;
    st.insert(0);
    ll flag=0;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i%2==0)
        {
            a[i] *= -1;
        }
        sum += a[i];
        if(st.find(sum)!=st.end())
        {
            flag = 1;
        }
        st.insert(sum);
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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




