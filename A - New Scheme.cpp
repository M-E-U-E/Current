#include <iostream>
#define ll long long
using namespace std;
void solve()
{
    ll n = 8;
    ll f=0;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%25!=0 || a[i]<100 || a[i]>675)
        {
            f=1;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            f=1;
        }

    }
    if(f)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

