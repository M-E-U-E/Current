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
int removeZeros(int num) {
    int ret = 0;
    int ten = 1;
    while (num) {
        int dig = num % 10;
        num /= 10;
        if (dig) {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}
void solve()
{
    ll a, b, c;
    cin >> a >> b;
    c = a+b;
    a = removeZeros(a);
    b = removeZeros(b);
    c = removeZeros(c);
    if( a+b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
