#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define dl double
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
class c
{
public:
    ll c1,c2;
};
bool ValueCmp(c const & a, c const & b)
{
    return a.c2 < b.c2;
}
int main()
{
    ll n,m,b,d,e,s=0,t,s2=0;
    cin>>n>>m;
    ll a1[n],a2[n];
    vector<c>v,v2;
    loop
    {
        cin>>a1[i];
        s2+=a1[i];
    }
    loop
    {
        cin>>a2[i];
    }
    for(ll i=0; i<n; i++)
    {
        c cc;
        cc.c1=a1[i];
        cc.c2=a2[i];
        v.push_back(cc);
        v2.push_back(cc);
    }
    std::sort(v.begin(),v.end(), ValueCmp);
    ll ss=0;
    for(ll i=0;i<m;i++)
    {
        ss=0;
        cin>>t>>d;
        if(s>=s2)
        {
            cout<<0<<endl;
            continue;
        }
        ll x=v2[t-1].c1-d;
        //cout<<x<<endl;
        if(x>=0)
        {
            ss+=v2[t-1].c2*d;
            v2[t-1].c1-=d;
            s+=d;
        }
        else
        {
            ss+=(v2[t-1].c2)*(v2[t-1].c1);
            x=d-(v2[t-1].c1);
            s+=v2[t-1].c1;
            v2[t-1].c1=0;
            while(x)
            {
                ll y=v[0].c1-x;
                //cout<<y<<endl;
                //cout<<v[0].c1<<endl;
                if(y>=0)
                {
                    ss+=(v[0].c2)*x;
                    y=0;
                    v[0].c1-=x;
                    s+=x;
                }
                else
                {
                    ss+=(v[0].c2)*(v[0].c1);
                    s+=v[0].c1;
                    y=v[0].c1-x;
                    v[0].c1=0;
                    //cout<<y<<endl;
                }
                if(v[0].c1==0)
                {

                    v.erase(v.begin(),v.begin()+1);
                    //cout<<v[0].c1<<endl;
                    //cout<<v[1].c1<<endl;
                }
                if(y==0)
                    break;
                x=y*(-1);
            }
        }
        if(s>=s2)
        {
            cout<<0<<endl;
        }
        cout<<ss<<endl;
        for(ll j=0;j<v.size();j++)
            cout<<v[j].c1<<"  "<<v[j].c2<<endl;
    }
}

