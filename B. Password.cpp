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
int pi[1000005];
string p;

int cal()
{
    int now;

    pi[0]= now= -1;

    for(int i=1; i<p.length(); i++)
    {

        while(now!=-1 && p[i]!=p[now+1])
            now= pi[now];

        if(p[i]==p[now+1])
            pi[i]= ++now;
        else
            pi[i]= -1;


    }

}
void solve()
{
    cin>> p;
    cal();
    int size = p.size();
    int maxi= pi[size-1];
    int found= pi[maxi];
    if(maxi==-1)
    {
        found=-1;
    }
    for(int i=1; i<(size-1); i++)
    {
        if(pi[i]==maxi)
        {
            found=maxi;
        }
    }
    if(found==-1)
    {
        cout << "Just a legend" << endl;
    }
    else
    {
        cout<< p.substr(0,found+1) <<endl;
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