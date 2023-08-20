#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool Palindrom(string s)
{
    int n = s.size();
    for (int i = 0, j = n - 1; i < n / 2; ++i, --j)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    string s;
    cin >> s;
    ll hr = (s[0] - '0') * 10 + ((s[1] - '0'));
    ll mn = (s[3] - '0') * 10 + ((s[4] - '0'));
    ll c = 0;
    while(1)
    {
        if(mn == 59)
        {
            mn = 0;
            if (hr == 23)
            {
                hr = 0;
            }
            else
            {
                hr++;
            }
        }
        else
        {
            mn++;
        }
        string p;
        if(hr < 10)
        {
            p = "0";
            p += (hr + '0');
        }
        else
        {
            ll temp = hr;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            p += (x + '0');
            p += (y + '0');
        }
        p += ':';
        string q;
        if(mn < 10)
        {
            q = "0";
            q += (mn + '0');
        }
        else
        {
            ll temp = mn;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            q += (x + '0');
            q += (y + '0');
        }

        p = p+q;
        if(Palindrom(p))
        {
            cout << p << endl;
            break;
        }
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



#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool Palindrom(string s)
{
    int n = s.size();
    for (int i = 0, j = n - 1; i < n / 2; ++i, --j)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    string s;
    cin >> s;
    ll hr = (s[0] - '0') * 10 + ((s[1] - '0'));
    ll mn = (s[3] - '0') * 10 + ((s[4] - '0'));
    ll c = 0;
    while(1)
    {
        if(mn == 59)
        {
            mn = 0;
            if (hr == 23)
            {
                hr = 0;
            }
            else
            {
                hr++;
            }
        }
        else
        {
            mn++;
        }
        string p;
        if(hr < 10)
        {
            p = "0";
            p += (hr + '0');
        }
        else
        {
            ll temp = hr;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            p += (x + '0');
            p += (y + '0');
        }
        p += ':';
        string q;
        if(mn < 10)
        {
            q = "0";
            q += (mn + '0');
        }
        else
        {
            ll temp = mn;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            q += (x + '0');
            q += (y + '0');
        }

        p = p+q;
        if(Palindrom(p))
        {
            cout << p << endl;
            break;
        }
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



#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool Palindrom(string s)
{
    int n = s.size();
    for (int i = 0, j = n - 1; i < n / 2; ++i, --j)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    string s;
    cin >> s;
    ll hr = (s[0] - '0') * 10 + ((s[1] - '0'));
    ll mn = (s[3] - '0') * 10 + ((s[4] - '0'));
    ll c = 0;
    while(1)
    {
        if(mn == 59)
        {
            mn = 0;
            if (hr == 23)
            {
                hr = 0;
            }
            else
            {
                hr++;
            }
        }
        else
        {
            mn++;
        }
        string p;
        if(hr < 10)
        {
            p = "0";
            p += (hr + '0');
        }
        else
        {
            ll temp = hr;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            p += (x + '0');
            p += (y + '0');
        }
        p += ':';
        string q;
        if(mn < 10)
        {
            q = "0";
            q += (mn + '0');
        }
        else
        {
            ll temp = mn;
            ll y = temp % 10;
            temp /= 10;
            ll x = temp % 10;
            q += (x + '0');
            q += (y + '0');
        }

        p = p+q;
        if(Palindrom(p))
        {
            cout << p << endl;
            break;
        }
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



