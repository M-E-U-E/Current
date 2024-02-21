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
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void solve()
{
    ll k, sum = 0, fib[41];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 41; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        sum += fib[i];
    }
    cout << sum << endl;
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

