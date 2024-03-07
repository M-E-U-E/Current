
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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+5), pref(n+5,0);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
//    cerr<< a[0] << endl;
    pref[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pref[i]=a[i]+pref[i-1];
    }
//    cout << pref[n-1] << endl;
//    ll q;
//    cin >> q;
    while(q--)
    {
        ll x;
        cin >> x;
//        cout << pref[n-1] << endl;
        if(x>pref[n-1])
        {
            cout << -1 << endl;

        }
        else
        {
            ll low=0, high=n-1;
            ll indx=-5;
            while(low<=high)
            {
                ll mid=low+(high-low)/2;
                if(pref[mid]>=x)
                {
                    indx=mid;
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            cout << indx+1 << endl;
        }

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

