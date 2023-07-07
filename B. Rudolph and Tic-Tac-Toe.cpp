#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n=3, c=0, f=0, x=0;
    int i, j;
    string s, p, q, r;
    cin >> p;
    cin >> q;
    cin >> r;
    s = p+q+r;
    if(s[0]==s[1] && s[1]==s[2] && (s[0]!='.'))
    {
        if(s[0]=='X')
        {
            c=1;
        }
        else if(s[0]=='O')
        {
            f=1;
        }
        else if(s[0]=='+')
        {
            x=1;
        }
    }
    if(s[3]==s[4] && s[4]==s[5] && (s[3]!='.'))
    {
        if(s[3]=='X')
        {
            c=1;
        }
        else if(s[3]=='O')
        {
            f=1;
        }
        else if(s[3]=='+')
        {
            x=1;
        }
    }
    if(s[6]==s[7] && s[7]==s[8] && (s[6]!='.' ))
    {
        if(s[6]=='X')
        {
            c=1;
        }
        else if(s[6]=='O')
        {
            f=1;
        }
        else if(s[6]=='+')
        {
            x=1;
        }
    }
    if(s[0]==s[3] && s[3]==s[6] && (s[0]!='.' ))
    {
        if(s[0]=='X')
        {
            c=1;
        }
        else if(s[0]=='O')
        {
            f=1;
        }
        else if(s[0]=='+')
        {
            x=1;
        }
    }
    if(s[1]==s[4] && s[4]==s[7] && (s[1]!='.' ))
    {
        if(s[1]=='X')
        {
            c=1;
        }
        else if(s[1]=='O')
        {
            f=1;
        }
        else if(s[1]=='+')
        {
            x=1;
        }
    }
    if(s[2]==s[5] && s[5]==s[8] && (s[2]!='.' ))
    {
        if(s[2]=='X')
        {
            c=1;
        }
        else if(s[2]=='O')
        {
            f=1;
        }
        else if(s[2]=='+')
        {
            x=1;
        }
    }
    if(s[0]==s[4] && s[4]==s[8] && (s[0]!='.'))
    {
        if(s[0]=='X')
        {
            c=1;
        }
        else if(s[0]=='O')
        {
            f=1;
        }
        else if(s[0]=='+')
        {
            x=1;
        }
    }
    if(s[2]==s[4] && s[4]==s[6] && (s[2]!='.' ))
    {
        if(s[2]=='X')
        {
            c=1;
        }
        else if(s[2]=='O')
        {
            f=1;
        }
        else if(s[2]=='+')
        {
            x=1;
        }
    }
    if(c)
    {
        cout << "X" << endl;
    }
    else if(f)
    {
        cout << "O" << endl;
    }
    else if(x)
    {
        cout << "+" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

