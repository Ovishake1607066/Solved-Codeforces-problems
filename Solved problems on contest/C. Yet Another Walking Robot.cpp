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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        pair<ll,ll>p;
        p=make_pair(0,0);
        map<pair<ll,ll>,ll>m;
        cin>>n;
        m[p]=-1;
        ll a,b,c=1000000000,d,e;
        string s;
        cin>>s;
        ll x=0,y=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
            else
                y--;
            p=make_pair(x,y);
            if(m[p] || m[p]==-1)
            {
                if(m[p]==-1)
                {
                    a=0;
                    if(i+1<c)
                    {
                        d=1;
                        e=i+1;
                        c=i+1;
                    }
                }
                else
                {
                    a=m[p];
                    if(i+1-a<c)
                    {
                        d=a+1;
                        e=i+1;
                        c=abs(d-e);
                    }
                }
            } m[p]=i+1;
            //cout<<x<<"   "<<y<<"  "<<m[p]<<endl;

        }
        if(c==1000000000)
            cout<<-1<<endl;
        else
            cout<<d<<" "<<e<<endl;

    }
}

