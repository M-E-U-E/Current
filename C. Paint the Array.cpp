#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, j, c=0, g1=0, g2=0, f1=1, f2=1;
    cin >> n;
    ll a[n+7];
    vector<ll>v1, v2;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(i%2==0)
        {
            v1.push_back(a[i]);
        }
        else
        {
            v2.push_back(a[i]);
        }
    }
    for(i=0; i<v1.size(); i++)
    {
//        cerr << v1[i] << " ";
        g1 = __gcd(g1,v1[i]);
    }
//    cout << endl;
    for(i=0; i<v2.size(); i++)
    {
//        cerr << v2[i] << " ";
        g2 = __gcd(g2,v2[i]);
    }
//    cerr << g1 << " " << g2 << endl;
    if(g1==g2)
    {
        cout << 0 << endl;
        return;
    }
    for(i=0; i<v1.size(); i++)
    {
//        cerr << v1[i] << " ";
        if(v1[i]%g2==0)
        {
            f1=0;
            break;
        }
    }
    if(f1)
    {
        cout << g2 << endl;
        return;
    }
    for(i=0; i<v2.size(); i++)
    {
//        cerr << v2[i] << " ";
        if(v2[i]%g1==0)
        {
            f2=0;
            break;
        }
    }
    if(f2)
    {
        cout << g1 << endl;
        return;
    }
    cout << 0 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}


