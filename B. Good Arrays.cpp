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
    cin  >> n;
    ll a[n+6], b[n];
    ll sum = 0;
    set<ll> st;
    vector<ll> v;
    ll c=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            c++;
        }
        st.insert(a[i]);
        sum += a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    ll ans = 0;
    ll mx = 1;
//    for(int i=0; i<n-1; i++)
//    {
//        if(b[i]==b[i+1])
//        {
//            c++;
//        }
//        else
//        {
//            mx = max(c,mx);
//            c = 1;
//        }
//    }
////    cout << mx << endl;
    ans = (n+1)/2;
    ll x = st.size();
    if(n==1)
    {
        cout << "NO" << endl;
        return;
    }
    if(sum - n>=c)
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

