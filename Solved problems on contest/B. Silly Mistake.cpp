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
ll mark[10000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    vector<ll>v,v1,v2;
    ll a[n],b=0,c=0,d=0,e=0,c1=0,c2=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<n; i++)
    {
        //cout<<i<<endl;
        if(a[i]<0)
        {
            ll x=(-1)*a[i];
            if(mark[x]!=1)
            {
                //cout<<a[i]<<endl;
                cout<<-1<<endl;
                return 0;
            }
            mark[x]=2;
            c1++;
        }
        else
        {
            if(mark[a[i]])
            {
                cout<<-1<<endl;
                return 0;
            }
            mark[a[i]]=1;
            v1.push_back(a[i]);
            c2++;
        }
        if(c1==c2)
        {
            for(ll j=0; j<v1.size(); j++)
            {
                if(mark[v1[j]]!=2)
                {
                    //cout<<v1[j]<<endl;
                    cout<<-1<<endl;
                    return 0;
                }
                //cout<<v1[j]<<endl;
            }
            for(ll i=0; i<v1.size(); i++)
            {
                mark[v1[i]]=0;
            }
            v.push_back(v1.size()*2);
            v1.clear();
            c1=0;
            c2=0;
        }
    }
    //cout<<v.size()<<endl;
    if(c1!=c2)
    {

        //cout<<v1[j]<<endl;
        cout<<-1<<endl;
        return 0;

    }
    cout<<v.size()<<endl;
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
