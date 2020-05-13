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
vector<string>v,v2,v3;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,m;
    cin>>n>>m;

    string s,ans="";
    ll a,b=0,c=0,d=0,ss=0;
    for(ll i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(ll i=0; i<v.size(); i++)
    {
        //cout<<i<<endl;
        if(mark[i])
            continue;
        for(ll j=i+1; j<v.size(); j++)
        {
            //cout<<j<<endl;
            if(mark[j])
                continue;
            string s1=v[i],s2=v[j];
            string s3=s2;
            reverse(s3.begin(),s3.end());
            if(s1==s2)
            {
                v3.push_back(s1);
                ss+=s1.size();
                mark[j]=1;
                mark[i]=1;
                break;
            }
            else if(s1==s3)
            {
                v3.push_back(s1);
                ss+=s1.size();
                mark[j]=1;
                mark[i]=1;
                break;
            }
        }
        if(mark[i]==0)
        {
            ll x=0;
            string sa=v[i];
            for(ll j=0; j<sa.size()/2; j++)
            {
                if(sa[j]!=sa[sa.size()-j-1])
                {
                    x=1;
                    break;
                }
            }
            if(x==0)
                v2.push_back(sa);
        }
        //cout<<i<<endl;
    }
    //cout<<1111<<endl;
    srt(v2);
    if(v2.size())
        cout<<ss*2+v2[v2.size()-1].size()<<endl;
    else
        cout<<ss*2<<endl;
    if(v3.size())
    {
        for(ll i=0; i<v3.size(); i++)
            cout<<v3[i];
    }
    if(v2.size())
        cout<<v2[v2.size()-1];
    if(v3.size())
    {
        for(ll i=v3.size()-1; i>=0; i--)
        {
            //cout<<i<<endl;
            string s44=v3[i];
            reverse(s44.begin(),s44.end());
            cout<<s44;
        }
    }
    cout<<endl;


}

