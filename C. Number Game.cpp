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
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    string s1 = "Ashishgup";
    string s2 = "FastestFinger";
    if(n==1)
    {
        cout << s2 << endl;
    }
    else if(n==2)
    {
        cout << s1 << endl;
    }
    else if(n>2 && n%2==1)
    {
        cout << s1 << endl;
    }
    else
    {
        if((n&(n-1))==0)
        {
            cout << s2 << endl;
        }
        else if(n%4==0)
        {
            cout << s1 << endl;
        }
        else if(isPrime(n/2))
        {
            cout << s2 << endl;
        }
        else
        {
            cout << s1 << endl;
        }
    }
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
