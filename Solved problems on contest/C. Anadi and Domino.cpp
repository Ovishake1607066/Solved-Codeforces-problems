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
ll mark[100][100];
ll tn,n1,n2,source,edge;
vector<vector< ll > >adj(100);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    cin>>tn;
    cin>>edge;
    ll w=100000,c=0,b=0,d=0,s=0;
    for(ll i=1; i<=edge; i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    for(ll i=1; i<=tn; i++)
    {
        if(adj[i].size())
        {
            d++;
            if(adj[i].size()<=w)
            {
                w=adj[i].size();
                c=i;
            }
            cout<<adj[i].size()<<endl;
        }
    }
    if(d==7)
        d=1;
    else
        d=0;
    for(ll i=1;i<=tn;i++)
    {
        for(ll j=0;j<adj[i].size();j++)
        {
            if((adj[i][j]==c || i==c) && d)
                {
                    b=1;
                    mark[i][adj[i][j]]=1;
                    mark[adj[i][j]][i]=1;
                }
            else
                {
                    if(mark[i][adj[i][j]]==0)
                        s++;
                    mark[i][adj[i][j]]=1;
                    mark[adj[i][j]][i]=1;
                }
        }
        cout<<s<<endl;
    }
    if(b)
        s++;
    cout<<w<<endl<<c<<endl;
    cout<<min(s,16LL)<<endl;

}
