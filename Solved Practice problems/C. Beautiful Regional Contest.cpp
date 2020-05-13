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
        ll n;
        cin>>n;
        ll a=0,b=0,c=0,d=0,e=0,g=-1;
        ll f=n/2;
        vector<ll>v,v1;
        loop
        {
            cin>>a;
            v.push_back(a);
        }
        v.push_back(-1);
        for(ll i=1;i<n+1;i++)
        {
            if(v[i]==v[i-1])
                c++;
            else
            {
                c++;
                d+=c;
                if(d<=f)
                    {
                        //cout<<c<<endl;
                        v1.push_back(c);
                        e+=c;
                        c=0;
                    }
                else
                {
                    c=0;
                    break;
                }
            }
        }
        if(v1.size()<3 || f<3)
        {
            cout<<0<<" "<<0<<" "<<0<<endl;
        }
        else
        {
            a=v1[0];
            d=0;
            e=v1.size();
            for(ll i=1;i<v1.size();i++)
            {
                d+=v1[i];
                if(d>a)
                {
                    b=d;
                    e=i+1;
                    break;
                }
            }
            d=0;
            for(ll i=e;i<v1.size();i++)
                {
                    d+=v1[i];

                }
                c=d;
                //cout<<a<<"  "<<b<<"  "<<c<<endl;
            if(a<b  && a<c && a!=0 && b!=0 && c!=0)
                cout<<a<<" "<<b<<" "<<c<<endl;
            else
                cout<<0<<" "<<0<<" "<<0<<endl;
        }
    }
}

