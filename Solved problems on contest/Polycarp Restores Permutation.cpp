#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n],b,c=0,e,s=0,c1=0,c2=0;
    for(ll i=0; i<n-1; i++)
    {
        cin>>a[i];
        if(c1==0 && a[i]==1)
        {
            c1=i+1;
        }
        if(a[i]==-1)
        {
            c2=i+1;
        }
    }
    deque<ll>d;
    if(c1)
    {
        d.push_back(1);
        d.push_back(2);
        b=2;
        for(ll i=c1; i<n-1; i++)
        {
            d.push_back(a[i]+b);
            b=a[i]+b;
        }
        b=1;
        for(ll i=c1-2; i>=0; i--)
        {
            d.push_front(b-a[i]);
            b=b-a[i];
        }
        deque<ll> :: iterator it;
        ll x=0,y;
        for(it=d.begin(); it!=d.end(); it++)
        {
            if(*it<=0 || *it>n)
            {
                d.clear();
                x=1;
                break;
            }
            mark[*it]++;
            s+=*it;
        }
        if(d.size()!=n)
            x=1;
        for(ll i=1; i<=n; i++)
        {
            if(mark[i]==0 || mark[i]>1)
            {
                x=1;
                break;
            }
        }
        y=((n*n)+n)/2;
        if(s==y && x==0)
        {
            for(it=d.begin(); it!=d.end(); it++)
            {
                cout<<*it<<" ";
            }
            return 0;
        }
        d.clear();
    }
    if(c2)
    {
        d.push_back(2);
        d.push_back(1);
        b=1;
        for(ll i=c2; i<n-1; i++)
        {
            d.push_back(a[i]+b);
            b=a[i]+b;
        }
        b=2;
        for(ll i=c2-2; i>=0; i--)
        {
            d.push_front(b-a[i]);
            b=b-a[i];
        }
        deque<ll> :: iterator it;
        ll x=0,y;
        s=0;
        mark[1000000]={0};
        for(it=d.begin(); it!=d.end(); it++)
        {
            if(*it<=0 || *it>n)
            {
                d.clear();
                x=1;
                //cout<<*it<<endl;
                break;
            }
            mark[*it]++;
            s+=*it;
        }
        if(d.size()!=n)
            x=1;
        for(ll i=1; i<=n; i++)
        {
            if(mark[i]==0 || mark[i]>1)
            {
                x=1;
                break;
            }
        }
        y=((n*n)+n)/2;
        //cout<<x<<endl;
        if(s==y && x==0)
        {
            for(it=d.begin(); it!=d.end(); it++)
            {
                cout<<*it<<" ";
            }
            return 0;
        }
    }
    cout<<-1<<endl;
}
