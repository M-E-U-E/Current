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
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5], b[n+5];
    ll one=0, two=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    if(two)
    {
        cout << "2 ";
        two--;
    }
    if(one)
    {
        cout << "1 ";
        one--;
    }
    for(int i=0; i<two; i++)
    {
        cout << "2 ";
    }
    for(int i=0; i<one; i++)
    {
        cout << "1 ";
    }
    cout << endl;
//    sort(a,a+n);
//    for(int i=0; i<n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;

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




