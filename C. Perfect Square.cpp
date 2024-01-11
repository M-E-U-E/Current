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
void solve()
{
    ll n;
    cin >> n;
    char r[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> r[i][j];
        }
    }
    ll s = 0;
    for (int i = 0; i < n / 2; i++)
    {
        vector<char> v1;
        vector<char> v2;
        vector<char> v3;
        vector<char> v4;
        for (int j = i; j < n - i - 1; j++)
        {
            v1.push_back(r[i][j]);
        }
        for (int j = n - i - 1; j >= i + 1; j--)
        {
            v2.push_back(r[n - i - 1][j]);
        }
        for (int j = i; j < n - i - 1; j++)
        {
            v3.push_back(r[j][n - i - 1]);
        }
        for (int j = n - i - 1; j >= i + 1; j--)
        {
            v4.push_back(r[j][i]);
        }
        for (int j = 0; j < v1.size(); j++)
        {

            char a = max(max(v1[j], v2[j]), max(v3[j], v4[j]));
            s += a - v1[j];
            s += a - v2[j];
            s += a - v3[j];
            s += a - v4[j];
        }
    }
    cout << s << endl;
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
