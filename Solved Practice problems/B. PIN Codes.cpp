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
        ll n,a,b,c=0,d=0;
        cin>>n;
        string s[n+10];
        loop
        {
            cin>>s[i];
        }
        vector<ll>v[n+10];
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(s[i]==s[j])
                {
                    v[j].push_back(i);
                    c++;
                    break;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i].size())
            {
                //cout<<v[i].size()<<endl;
                ll g=s[i][0];
                for(ll j=0,k=48;j<v[i].size() && k<=57;j++,k++)
                {
                   // cout<<j<<endl;
                        if((char)k==g)
                            {
                                j--;
                                continue;
                            }
                        s[v[i][j]][0]=(char)k;
                        ll zz=0;
                        for(ll l=0;l<n;l++)
                        {
                            if(s[v[i][j]]==s[l])
                                zz++;
                        }
                        if(zz>1)
                        {
                            j--;
                        }
                        //cout<<s[i][0]<<endl;
                }
            }
        }
        cout<<c<<endl;
        for(ll i=0;i<n;i++)
            cout<<s[i]<<endl;
    }
}

