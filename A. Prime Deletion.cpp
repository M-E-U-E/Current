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
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void solve()
{

    ll n;
    cin >> n;
    vector<ll> v;
    for(int i = 0; i<9; i++)
    {
        v.push_back(n%10);
        n /=10;
    }
    for (int i= v.size()-1; i>=0; i--)
    {
        for(int j=i-1; j>=0; j--)
        {
            ll x = v[i]*10;
            x += v[j];
            if(isPrime(x))
            {
                cout << x << endl;
                return;
            }

        }
    }
    cout<<-1 << endl;

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
