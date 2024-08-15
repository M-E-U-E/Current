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
//vector<ll>v;
//void primeFactors(ll n)
//{
//    // Print the number of 2s that divide n
//    while (n % 2 == 0)
//    {
//        v.push_back(2);
//        n = n/2;
//    }
//
//    // n must be odd at this point. So we can skip
//    // one element (Note i = i +2)
//    for (ll i = 3; i*i<=n; i = i + 2)
//    {
//        // While i divides n, print i and divide n
//        while (n % i == 0)
//        {
//            // cout<<i<<ss;
//            v.push_back(i);
//            n = n/i;
//        }
//    }
//
//    // This condition is to handle the case when n
//    // is a prime number greater than 2
//    if (n > 2)
//        v.push_back(n);
//}
const int N = 1e5+10;
bitset <N> vis;
void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    ll count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            if (count == 2)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            count = 0;
        }
    }
    vector<ll> a, b;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] != arr[i + 1])
        {
            a.push_back(arr[i]);

        }
        else
        {
            a.push_back(arr[i]);
            b.push_back(arr[i]);
            i++;
        }
    }
    cout << "YES" << endl;
    cout << b.size() << endl;

    for(int x : b)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << a.size() << endl;
    sort(a.rbegin(),a.rend());

    for(int x : a)
    {
        cout << x << " ";
    }
    cout << endl;



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
