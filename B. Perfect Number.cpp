#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
int ans()
{

}

void solve()
{
    ll n;
    cin >> n;
    for(int i=1; i<=99999999; i++)
    {
        ll r = 0;
        ll sum = 0;
        ll m = i;
        while(m>0)
        {
            r = m%10;
            sum += r;
            m /= 10;

        }
        if(sum==10)
        {
            n--;
        }
        if(n==0)
        {
            cout << i << endl;
            break;
        }
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


