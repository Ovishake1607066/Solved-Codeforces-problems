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
vector<ll>v1,v2;
ll mark[5010];
int main()
{
    ll n,k;
    cin>>n>>k;
    ll b,c=0,d,e;
    loop
    {
        cin>>b;
        if(b%2==0)
        {
            v1.push_back(b);
        }
        else
        {
            v2.push_back(b);
        }
    }
    if(k%2==0)
    {
        if(v2.size()>=2)
        {
            for(ll i=0; i<v2.size()-1; i++)
            {
                if(v2[i]<0)
                    continue;
                for(ll j=i+1; j<v2.size(); j++)
                {
                    if(v2[j]<0)
                        continue;
                    if(((v2[i]+v2[j])%k)==0)
                    {
                        v2[i]=-1;
                        v2[j]=-1;
                        c+=2;
                        break;
                    }
                }
            }
        }
        if(v1.size()>=2)
        {
            for(ll i=0; i<v1.size()-1; i++)
            {
                if(v1[i]<0)
                    continue;
                for(ll j=i+1; j<v1.size(); j++)
                {
                    if(v1[j]<0)
                        continue;
                    if(((v1[i]+v1[j])%k)==0)
                    {
                        v1[i]=-1;
                        v1[j]=-1;
                        c+=2;
                        break;
                    }
                }
            }
        }
    }
    else
    {
        if(v2.size()>=1 && v1.size()>=1)
        {
            for(ll i=0; i<v1.size(); i++)
            {
                if(v1[i]<0)
                    continue;
                for(ll j=0; j<v2.size(); j++)
                {
                    //cout<<v1[i]<<v2[j]<<endl;
                    if(v2[j]<0)
                        continue;
                    if(((v1[i]+v2[j])%k)==0)
                    {
                        v1[i]=-1;
                        v2[j]=-1;
                        c+=2;
                        break;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
}
