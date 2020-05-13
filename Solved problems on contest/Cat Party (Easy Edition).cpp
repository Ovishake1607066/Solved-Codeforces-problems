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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n+10],d;
    loop
    {
        cin>>a[i];
        mark[a[i]]++;
    }
    for(ll i=n-1; i>=0; i--)
    {
        ll m1=0,m2=10000000,e=0,c=0,f=0;
        set<ll>s;
        set<ll> :: iterator it;
        for(ll j=1; j<=10; j++)
        {
            if(mark[j])
            {
                s.insert(mark[j]);
                m1=max(m1,mark[j]);
                m2=min(m2,mark[j]);
            }

        }
        //cout<<s.size()<<endl;
        it=s.begin();
        if(s.size()==1 && *it==1)
        {
            cout<<i+1<<endl;
            return 0;
        }
        if(s.size()==2)
        {
            ll x,y,cc=0,cc2=0;
            x=*it;
            it++;
            y=*it;
                for(ll j=1; j<=10; j++)
                {
                    if(mark[j])
                    {
                        if(mark[j]==m1)
                            cc++;
                        if(mark[j]==m2)
                            cc2++;
                    }
                }
                if(x==1 && cc2==1)
                {
                    cout<<i+1<<endl;
                    return 0;
                }
                if(cc==1 && x+1==y)
                {
                    cout<<i+1<<endl;
                    return 0;
                }

        }
        mark[a[i]]--;
        s.clear();
        for(ll j=1; j<=10; j++)
        {
            if(mark[j])
            {
                s.insert(mark[j]);
            }
        }
        //cout<<s.size()<<endl;
        it=s.begin();
        if(s.size()==1)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}

