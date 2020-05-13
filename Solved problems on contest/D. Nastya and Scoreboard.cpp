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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    vector<string>v;
    string s;
    s="1110111";
    v.push_back(s);
    s="0010010";
    v.push_back(s);
    s="1011101";
    v.push_back(s);
    s="1011011";
    v.push_back(s);
    s="0111010";
    v.push_back(s);
    s="1101011";
    v.push_back(s);
    s="1101111";
    v.push_back(s);
    s="1010010";
    v.push_back(s);
    s="1111111";
    v.push_back(s);
    s="1111011";
    v.push_back(s);
    cin>>n;
    ll k;
    cin>>k;
    vector<string>vv;
    ll a,b,c=0,d=0,e=0,f=0,dd=0,x=0;
    vector<ll>vl,ans,vmax;
    loop
    {
        cin>>s;
        vv.push_back(s);
        d=llmax;
        dd=llmin;
        for(ll j=0; j<v.size(); j++)
        {
            c=0;
            x=0;
            for(ll l=0; l<v[j].size(); l++)
            {
                if(s[l]=='0' && v[j][l]=='1')
                {
                    c++;
                }
                if(s[l]=='1' && v[j][l]=='0')
                {
                    x=1;
                    break;
                }
            }
            if(x)
            {
                continue;
            }
            d=min(c,d);
            dd=max(c,dd);
            //cout<<c<<endl;
        }
        e+=d;
        f+=dd;
        vl.push_back(d);
        vmax.push_back(dd);
    }
    for(ll i=0;i<vl.size();i++)
    {
        cout<<vl[i]<<"  "<<vmax[i]<<endl;
    }
    if(e>k)
    {
        // cout<<e<<" "<<k<<endl;
        cout<<-1<<endl;
        return 0;
    }
    loop
    {
        s=vv[i];
        ll z=llmax,y=0;
        for(ll j=v.size()-1; j>=0; j--)
        {
            c=0;
            x=0;
            for(ll l=0; l<v[j].size(); l++)
            {
                if(s[l]=='0' && v[j][l]=='1')
                {
                    c++;
                }
                if(s[l]=='1' && v[j][l]=='0')
                {
                    x=1;
                    break;
                }
            }
            cout<<x<<" "<<j<<"  "<<i<<"   "<<k<<"  "<<c<<"  "<<e<<" "<<vl[i]<<" "<<f<<"  "<<vmax[i]<<endl;
            if(x)
            {
                continue;
            }
            if(k-c>=e-vl[i] && k-c<=f-vmax[i])
            {
                ans.push_back(j);
                k-=c;
                e-=vl[i];
                f-=vmax[i];
                y=1;
                break;
            }

        }
        if(y)
            ;
        else
        {
           cout<<-1<<endl;
            return 0;
            //cout<<i<<endl;
        }
    }
    for(ll i=0; i<ans.size(); i++)
    {
        cout<<ans[i];
    }
}
