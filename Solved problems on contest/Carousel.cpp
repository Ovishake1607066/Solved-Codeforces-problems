#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
#define l 1000000
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b=0,c=0,d=0;
        loop
        {
            cin>>a[i];
        }
        vector<ll>v;
        set<ll>s;
        loop
        {
            if(i==0)
            {
                v.push_back(1);
                b=1;
            }
            else if(i==n-1)
            {
                if(n>=3)
                {
                    if(a[i]!=a[0] && a[i]!=a[i-1])
                    {
                        v.push_back(3);
                    }
                    else if(a[i]==a[0])
                    {
                        v.push_back(1);
                    }
                    else if(a[i]==a[i-1])
                    {
                        if(a[i-1]==2)
                        v.push_back(2);
                        else
                            v.push_back(1);
                    }
                }
                else
                {
                    if(a[i]==a[0])
                    {
                        v.push_back(1);
                    }
                    else
                    {
                        v.push_back(2);
                    }
                }
            }
            else
            {
                if(a[i]!=a[i-1])
                {
                    if(b==1)
                    {
                        v.push_back(2);
                        b=2;
                    }
                    else
                    {
                        v.push_back(1);
                        b=1;
                    }
                }
                else
                {
                    if(b==1)
                    {
                        v.push_back(1);
                        b=1;
                    }
                    else
                    {
                        v.push_back(2);
                        b=2;
                    }
                }
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            s.insert(v[i]);
        }
        cout<<s.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

