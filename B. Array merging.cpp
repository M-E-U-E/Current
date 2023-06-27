#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, c=1;
        cin >> n;
        ll a[n], b[n];
        set<ll> st;

        for(i=0; i<n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        for(i=0; i<n; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }
        c=1;
        map<ll,ll>mp, mp1;
        for(i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                c++;
            }
            else
            {
                mp[a[i-1]] = max(mp[a[i-1]],c);
                c=1;
            }
        }
        mp[a[n-1]] = max(mp[a[n-1]],c);

        c = 1;
        for(i=1; i<n; i++)
        {
            if(b[i]==b[i-1])
            {
                c++;
            }
            else
            {
                mp1[b[i-1]] = max(mp1[b[i-1]],c);
                c=1;
            }
        }
        mp1[b[n-1]] = max(mp1[b[n-1]],c);

        ll ans = 0;
        for (auto i : st)
        {
            ans = max(ans, mp[i] + mp1[i]);
            cerr<<mp[i]<< " " << mp1[i] << endl;
        }

        cout << ans << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    {
        solve();

    }
    return 0;
}


