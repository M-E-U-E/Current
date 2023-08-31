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
    string s, p;
    cin >> s >> p;
    if(s==p)
    {
        cout << "YES" << endl;
        return;
    }

    ll n = s.size();
    ll f=0;
    for(int i = 0; i<n-1; i++)
    {
        if(s[i]=='0' && p[i]=='0' && s[i+1]=='1' && p[i+1]=='1')
        {
            f=1;
        }
    }
    if(f)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;


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



