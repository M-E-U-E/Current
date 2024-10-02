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
const int MAXN = 1600;
ll n, k;
string str[MAXN], temp;
map<string,ll>mp;
void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
        mp[str[i]] = i + 1;
    }
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            temp = "";
            for(int l = 0; l < k; l++)
            {
                if(str[i][l] == str[j][l])
                {
                    temp += str[i][l];
                }
                else
                {
                    if((str[i][l] == 'S' && str[j][l] == 'T') || (str[i][l] == 'T' && str[j][l] == 'S'))
                    {
                        temp += 'E';
                    }
                    else if((str[i][l] == 'S' && str[j][l] == 'E') || (str[i][l] == 'E' && str[j][l] == 'S'))
                    {
                        temp += 'T';
                    }
                    else if((str[i][l] == 'E' && str[j][l] == 'T') || (str[i][l] == 'T' && str[j][l] == 'E'))
                    {
                        temp += 'S';
                    }
                }
            }
            if(mp.find(temp) != mp.end() && mp[temp] > j + 1)
            {
                sum++;
            }
        }
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
