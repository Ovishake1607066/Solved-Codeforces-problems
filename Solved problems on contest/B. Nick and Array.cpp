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
vector<ll>v1,v2,v3;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a[n+10];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
            v1.push_back(a[i]);
        else if(a[i]==0)
        {
            v3.push_back(a[i]);
        }
        else
            v2.push_back(a[i]);
    }
    if(v3.size()%2==0)
    {
        for(ll i=0;i<v3.size();i++)
            v2.push_back(-1);
    }
    else
    {
        for(ll i=0;i<v3.size();i++)
            v2.push_back(-1);

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if((v1.size()%2==0 && v2.size()%2==0) || (v1.size()%2!=0 && v2.size()%2!=0))
    {
        //cout<<v1[0]<<endl;
        for(ll i=0; i<v1.size(); i++)
        {
            v1[i]=(v1[i]*(-1))-1;
        }
    }
    else
    {
        if(v1.size()==0)
        {
            if(v2.size()%2!=0)
                v2[0]=(v2[0]*(-1))-1;
        }
        else if(v2.size()==0)
        {
            if(v1.size()%2==0)
            {
                for(ll i=0; i<v1.size(); i++)
                {
                    v1[i]=(v1[i]*(-1))-1;
                }
            }
            else
            {
                for(ll i=1; i<v1.size(); i++)
                {
                    v1[i]=(v1[i]*(-1))-1;
                }
            }
        }
        else
        {
                //cout<<v2[0]<<endl;
                v2[0]=(v2[0]*(-1))-1;
                for(ll i=0; i<v1.size(); i++)
                {
                    v1[i]=(v1[i]*(-1))-1;
                }
        }
    }
    for(ll i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    for(ll i=0; i<v2.size(); i++)
        cout<<v2[i]<<" ";

}

