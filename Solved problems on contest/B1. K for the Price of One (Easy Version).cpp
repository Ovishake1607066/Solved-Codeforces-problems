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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,k,a,b=0,c=0,d=0,s1=0,s2=0,x=0,y=0;;
        cin>>n>>p>>k;
        vector<ll>v;
        loop
        {
            cin>>a;
            if(a<=p)
                v.push_back(a);
        }
        sort(v.begin(),v.end());
        y=0;
        for(ll x=0; x<k && x<v.size(); x++)
        {
            c=0;
            s2=0;
            for(ll ii=0;ii<=x && ii<v.size();ii++)
            {
                c+=v[ii];
                if(c<=p)
                    s2++;
            }
            for(ll i=x+1; i<v.size(); )
            {
                //cout<<c<<"  "<<v[i]<<endl;
                //cout<<c<<endl;
                ll ss=0,ss2=0;
                for(ll j=i,q=0; j<v.size()&&q<k; j++,q++)
                {
                    ss2++;
                }
                if(ss2==k)
                    ss=v[i+k-1];
                if(c+ss<=p && ss2==k)
                {
                    c=c+ss;
                    s2+=k;
                    i+=k;
                }
                else if(c+v[i]<=p)
                {
                    c=c+v[i];
                    s2++;
                    i++;
                }
                else
                    break;
            }
            y=max(s2,y);
            //cout<<s2<<endl;
        }
        for(ll i=0; i<v.size();)
        {
            ll ss=0,ss2=0;
            for(ll j=i,q=0; j<v.size()&&q<k; j++,q++)
            {
                ss2++;
            }
            if(ss2==k)
                ss=v[i+k-1];
            if(d+ss<=p && ss2==k)
            {
                d=d+ss;
                s1+=k;
                i+=k;
            }
            else if(d+v[i]<=p)
            {
                d=d+v[i];
                s1++;
                i++;
            }
            else
                break;
        }
        cout<<max(s1,y)<<endl;
    }
}

