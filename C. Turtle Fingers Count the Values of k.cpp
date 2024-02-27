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
    ll a, b, l;
    cin >> a >> b >> l;
    ll p = 0;
    set<ll> st;
    while(true)
    {
        ll x = pow(a,p);
//        if(x>l)
//        {
//            break;
//        }
        if((l%x)!=0)
        {
            break;
        }
        ll cur = l/x;
        st.insert(cur);
        while(cur%b==0)
        {
            cur/=b;
            st.insert(cur);
        }
        p++;
    }
    cout << st.size() << endl;
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


