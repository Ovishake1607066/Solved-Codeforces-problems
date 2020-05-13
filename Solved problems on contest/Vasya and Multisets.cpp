#include<bits/stdc++.h>
#define ll long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d ",n)
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
ll a[110],a1[110];
char s[110];
using namespace std;
int main()
{
    ll n,b,c,d,e;
    vector<ll>v[110];
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>b;
        a[b]++;
        v[b-1].push_back(i);
    }
    for(ll i=0; i<110; i++)
    {
        a1[v[i].size()]++;
    }
    if(a1[1]%2==0)
    {
        cout<<"YES"<<endl;
        ll x=a1[1]/2;
        ll y=0;
        for(ll i=0; i<110; i++)
        {
            if(v[i].size()==1 && y<x)
            {
                s[v[i][0]]='A';
                y++;
            }
            else if(v[i].size()==1 && y>=x)
                s[v[i][0]]='B';
        }
        for(ll i=0; i<110; i++)
        {
            for(ll j=0; j<v[i].size(); j++)
            {
                if(v[i].size()>=2)
                    s[v[i][j]]='A';
            }
        }
        for(ll i=0; i<n; i++)
            cout<<s[i];
    }
    else
    {
        ll w=0,q=0;
        for(ll i=0; i<110; i++)
        {
                if(v[i].size()>=3)
                {
                    w=1;
                    s[v[i][0]]='B';
                    break;
                }
        }
        if(w==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            ll x=a1[1]/2;
            ll y=0;
            for(ll i=0; i<110; i++)
            {
                if(v[i].size()==1 && y<x)
                {
                    s[v[i][0]]='B';
                    y++;
                }
                else if(v[i].size()==1 && y>=x)
                    s[v[i][0]]='A';
            }
            for(ll i=0; i<110; i++)
            {
                for(ll j=0; j<v[i].size(); j++)
                {
                    if(v[i].size()>=2)
                    {
                        if(s[v[i][j]]=='B')
                            ;
                        else
                            s[v[i][j]]='A';
                    }
                }
            }
                    for(ll i=0; i<n; i++)
            cout<<s[i];
        }
    }
}
