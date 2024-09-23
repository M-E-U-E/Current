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
const int mod = 1e9 + 7;
const int N = 2e6 + 5;
ll fact[N];

void pre()
{
	fact[0] = 1;
	for (int i = 1; i < N; i++)
		fact[i] = (i * fact[i - 1]) % mod;
}
ll bigmod(ll b, ll pow)
{
	ll ans = 1;
	while (pow)
	{
		if (pow & 1)ans = (ans * b) % mod;

		b = (b * b) % mod;
		pow >>= 1;
	}
	return ans;
}

ll nCk(ll n, ll k)
{
	if (n == 0 && k == 0) return 1;
	if (n <= 0 || k < 0) return 0;
	ll factn = fact[n];
	ll factk = bigmod(fact[k], mod - 2);
	ll factnk = bigmod(fact[n - k], mod - 2);
	return (factn * factk) % mod * (factnk) % mod;
}
int n, m;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	pre();
	cin >> n >> m;
	cout << nCk((2 * m) + (n - 1), n - 1) << endl;
	return 0;
}
