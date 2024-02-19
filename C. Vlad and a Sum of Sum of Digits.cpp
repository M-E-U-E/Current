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
ll fre[10000000];
int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    cout << fre[n] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 1; i <= 200000; i++)
    {
        fre[i] = fre[i - 1] + sum_of_digits(i);
    }
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
