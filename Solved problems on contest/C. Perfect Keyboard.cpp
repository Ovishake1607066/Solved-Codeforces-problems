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
ll mark[5010],mm[1000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        string s,ss="";
        cin>>s;
        vector<ll>v[200];
        ll a,b=0,c=0,d=0,e=0,n=0,f=0,g=0,h=0;
        for(ll i=0; i<s.size()-1; i++)
        {
                //cout<<s[i]<<endl;
                a=(ll)s[i];
                b=(ll)s[i+1];
                mark[a]++;
                mark[b]++;
                c=0;
                if(v[a].size())
                {
                    for(ll j=0;j<v[a].size();j++)
                    {
                        //cout<<j<<endl;
                        if(v[a][j]==b)
                            {
                                c=1;
                                break;
                            }
                    }
                    if(c==0)
                    {
                        v[a].push_back(b);
                    }
                }
                else
                {
                    v[a].push_back(b);
                }
                if(v[b].size())
                {
                    for(ll j=0;j<v[b].size();j++)
                    {
                        //cout<<j<<endl;
                        if(v[b][j]==a)
                            {
                                c=1;
                                break;
                            }
                    }
                    if(c==0)
                    {
                        v[b].push_back(a);
                    }
                }
                else
                {
                    v[b].push_back(a);
                }
        }
        for(ll i=97;i<=122;i++)
        {
            //cout<<i<<endl;
            if(mark[i])
            {
                if(v[i].size()==1)
                {
                    f++;
                    n=i;
                }
                else if(v[i].size()==2)
                {
                    g++;
                }
                else
                {
                    h++;
                }
            }
        }
        //cout<<(char)n<<" "<<f<<"  "<<g<<"  "<<h<<endl;
        if(f<1 || h)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            //cout<<(char)n<<endl;
            //cout<<(char)(n)<<endl;
            ss+=(char)n;
            //cout<<v[n][0]<<endl;
            //cout<<(char)v[n][0];
            //cout<<(char)v[n][0];
            ss+=(char)v[n][0];
            //cout<<ss<<endl;
            mm[n]++;
            mm[v[n][0]]++;
            n=v[n][0];
            for(ll i=n; ; )
            {
               // cout<<i<<endl;
                if(v[i].size()==2)
                {
                    ll x=v[i][0];
                    ll y=v[i][1];
                    mm[x]++;
                    mm[y]++;
                    if(mm[x])
                        ;
                    else
                    {
                        ss+=(char)x;
                        i=x;
                        continue;
                    }
                    if(mm[y])
                        ;
                    else
                    {
                        ss+=(char)y;
                        i=y;
                        continue;
                    }
                }
                else
                {
                    ll x=v[i][0];
                    mm[x]++;
                    if(mm[x])
                        ;
                    else
                    {
                        ss+=(char)x;
                        i=x;
                        continue;
                    }
                }
                ll zz=0;
                for(ll j=97;j<=122;j++)
                {
                    if(mark[i])
                    {
                        if(!mm[i])
                        {
                            zz=1;
                            break;
                        }
                    }
                }
                if(zz==0)
                    break;

            }
            for(ll i=97;i<=122;i++)
            {
                if(mark[i]==0)
                    ss+=(char)i;
            }
            cout<<ss<<endl;
        }

    }
}

