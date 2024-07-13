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
//bitset <N> vis;
//void sieve (void)
//{
//    for (int i = 2; i * i < N; ++i)
//    {
//        if (!vis[i])
//        {
//            for (int j = i * i; j < N; j += i) vis[j] = 1;
//        }
//    }
//}
int n=1000;
int a[1001]= {0};
vector<int>prime;
void sieve()
{
    a[0]=1;
    a[1]=1;
    for(int i=4; i<=n; i+=2)
    {
        a[i]=1;
    }
    for(int i=3; i*i<=n; i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        if(a[i]==0)
        {
            prime.push_back(i);
        }
    }
}
void solve()
{
    sieve();
    int N,k;
    cin>>N>>k;
    int c=0;
    for(int i=0; prime[i]<=N; i++)
    {
        for(int j=0; prime[j]<prime[i]; j++)
        {
            if(prime[j]+prime[j+1]+1==prime[i])
            {
                c++;
                break;
            }
        }
    }
    if(c>=k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
