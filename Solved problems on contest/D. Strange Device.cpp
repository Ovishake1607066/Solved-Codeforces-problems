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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,k,c=0,d=0,e=0,f=0,mm=100000000000;
    cin>>n>>k;
    vector<pair<ll,ll> >vv;
    ll a[n+10],b[n+10];
    for(ll i=0; i<=n; i++)
    {
        a[i]=-1;
        b[i]=-1;
    }
    loop
    {
        cin>>c>>d;
        vv.push_back(make_pair(c,d));
        b[c]=d;
        a[c]=d;
        mm=min(mm,d);
    }
    sort(a,a+n+1);
    c=mm-0+1;
    //cout<<c<<endl;
    for(ll i=1; i<=n; i++)
    {
        if(b[i]==-1)
            d++;
    }
    if(c>=k)
    {
        e=k-1;
        for(ll i=1; i<=n; i++)
        {
            if(b[i]==-1)
            {

                a[i]=-1;
            }
        }
        for(ll i=0; i<n; i++)
        {
            c=vv[i].first;
            d=vv[i].second;
            vector<ll>v2;
            for(ll j=1; j<=n; j++)
            {
                if(a[i]<vv[i].second && j!=c)
                {
                    v2.push_back(j);
                }
            }
            cout<<"? "<<vv[i].first<<" ";
            for(ll j=0; j<e; j++)
            {
                if(j==e-1)
                    cout<<v2[j];
                else
                    cout<<v2[j]<<" ";
            }
            cout<<endl;
            fflush(stdout);
            //cout.flush();
        }
        cout<<"! "<<e+1<<endl;
        //cout.flush();
        fflush(stdout);
    }
    else
    {
        e=k-1;
        for(ll i=1; i<=n; i++)
        {
            if(b[i]==0)
            {

                a[i]=1000000000000;
            }
        }
        for(ll i=0; i<n; i++)
        {
            c=vv[i].first;
            d=vv[i].second;
            vector<ll>v2;
            for(ll j=1; j<=n; j++)
            {
                if(a[i]>vv[i].second && j!=c)
                {
                    v2.push_back(j);
                }
            }
            cout<<"? "<<vv[i].first<<" ";
            for(ll j=0; j<e; j++)
            {
                if(j==e-1)
                    cout<<v2[j];
                else
                    cout<<v2[j]<<" ";
            }
            cout<<endl;
            fflush(stdout);
            //cout.flush();
        }
        cout<<"! "<<1<<endl;
        fflush(stdout);
        //cout.flush();
    }

}

