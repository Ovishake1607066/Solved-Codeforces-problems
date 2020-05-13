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
        ll a[n+10],b=0,c=0,d=0,e=0;
        vector<pair<ll,ll> >v;
        map<ll,ll>m;
        loop
        {
            cin>>a[i];
            m[a[i]]++;
            e=max(e,a[i]);
        }
        for(ll i=1;i<=e;i++)
        {
            if(d && m[i]>=2)
            {
                b=1;
                break;
            }
            if(m[i]>=3 || m[i]==0)
            {
                b=1;
                break;
            }
            if(d)
            {
                continue;
            }
            if(m[i]==2)
            {
                ;
            }
            else
            {
                d=1;
                c=i-1;
                break;
            }
            if(d==0 && i==e)
            {
                c=i;
                break;
            }
        }
        //cout<<c<<endl;
        if(b || c<=0)
        {
            cout<<0<<endl;
        }
        else
        {
            //cout<<c<<endl;
            map<ll,ll>m2,m3;
            ll x=0,y=0,xx=0,yy=0;
            for(ll i=0;i<c;i++)
            {
                m2[a[i]]++;
            }
            for(ll i=n-1;i>=c;i--)
            {
                m3[a[i]]++;
            }
            for(ll i=1;i<=c;i++)
            {
                if(m2[i]==0)
                {
                    x=1;
                    break;
                }
            }
            for(ll i=1;i<=n-c;i++)
            {
                if(m3[i]==0)
                {
                    y=1;
                    break;
                }
            }
            if(x==0 && y==0)
            {
                v.push_back(make_pair(c,n-c));
            }
            m2.clear();
            m3.clear();
            for(ll i=0;i<c;i++)
            {
                //cout<<n-i-1<<endl;
                m2[a[n-i-1]]++;
            }
            for(ll i=n-1;i>=c;i--)
            {
                //cout<<n-i-1<<endl;
                m3[a[n-i-1]]++;
            }
            for(ll i=1;i<=c;i++)
            {
                if(m2[i]==0)
                {
                    xx=1;
                    break;
                }
            }
            for(ll i=1;i<=n-c;i++)
            {
                if(m3[i]==0)
                {
                    yy=1;
                    break;
                }
            }
            if(xx==0 && yy==0)
            {
                v.push_back(make_pair(n-c,c));
            }
            if(v.size()>1)
            {
                if(v[0].first==v[1].first)
                {
                    cout<<1<<endl;
                    cout<<v[0].first<<" "<<v[0].second<<endl;
                    continue;
                }
            }
            cout<<v.size()<<endl;
            for(ll i=0;i<v.size();i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
    }
}

