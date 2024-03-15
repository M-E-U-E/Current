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
void solve()
{
    string a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(b.size()<a.size())
    {
        cout<<-1<<endl;
        return;
    }
    string ans;
    int x=b.size()-1;
    for(int i=a.size()-1; i>=0; i--)
    {
        if(x<0)
        {
            ans="-1";
            break;
        }
        int l=a[i]-'0';
        int r=b[x]-'0';
        string z;
        if(l==r)
        {
            z+='0';
            ans=z+ans;
        }
        else if(l<r)
        {
            int xx=r-l;
            z+=(xx+'0');
            ans=z+ans;
        }
        else
        {
            int n=b[x]-'0';
            x--;
            if(x<0)
            {
                ans="-1";
                break;
            }
            else
            {
                n=(b[x]-'0')*10 + n;
                int m=n-l;
                if(m<0 || m>9)
                {
                    ans="-1";
                    break;
                }
                else
                {
                    z+=(m+'0');
                    ans=z+ans;
                }
            }
        }
        x--;
        //cout<<ans<<endl;
    }
    string z;
    for(int i=0; i<=x; i++)
    {
        z+=b[i];
    }
    if(ans!="-1")
    {
        ans=z+ans;
    }
    while(ans[0]=='0')
    {
        ans.erase(ans.begin());
    }
    cout << ans << endl;
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
