#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, j, k, m, x, y, sum=0;
    cin >> n;
    ll a[n+5], b[n+5];
    for(i=1; i<=n; i++)
    {
       cin >> a[i];
       b[i]=a[i];
    }
    sort(b+1,b+n+1);
//    for(i=0; i<n; i++)
//    {
//        cerr << a[i] << " " << b[i] << endl;
//    }
    ll pre1[n+5];
    pre1[0]=0;
    for(i=1; i<=n; i++)
    {
        pre1[i]=pre1[i-1]+a[i];
    }
//    for(i=0; i<n; i++)
//    {
//        cerr << pre1[i] << " " ;
//    }
//    cout << endl;
    ll pre2[n+5];
    pre2[0]=0;
    for(i=1; i<=n; i++)
    {
        pre2[i]=pre2[i-1]+b[i];
    }
//    for(i=0; i<=n; i++)
//    {
//        cerr << pre2[i] << " " ;
//    }
//    cout << endl;
    ll q;
    cin >> q;
    while(q--)
    {
        ll k, l, r;
        cin >> k >> l >> r;
        if(k==1)
        {
            cout << pre1[r]-pre1[l-1] << endl;
        }
        else
        {
            cout << pre2[r]-pre2[l-1] << endl;
        }
    }

}
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
//        int t;
//        cin>>t;
//        while(t--)
        {
            solve();

        }
        return 0;
    }




