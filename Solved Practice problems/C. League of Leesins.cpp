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
ll mark[10000000],vis[10000000];
vector<ll>ans1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    ll a,b,c=0,d=0,e=0,x;
    vector<pair<ll,ll> >v1[100002];
    vector<ll>v[100];
    for(ll i=0; i<n-2; i++)
    {
        cin>>a>>b>>c;
        v1[a].push_back(make_pair(b,c));
        v1[b].push_back(make_pair(a,c));
        v1[c].push_back(make_pair(a,b));
        mark[a]++;
        mark[b]++;
        mark[c]++;
    }
    for(ll i=1; i<=n; i++)
    {
        v[mark[i]].push_back(i);
    }
    ans1.push_back(v[1][0]);
    vis[ans1[0]]=1;
    mark[ans1[0]]--;
    mark[v1[ans1[0]][0].first]--;
    mark[v1[ans1[0]][0].second]--;
    if(v1[ans1[0]][0].first==v[2][0] || v1[ans1[0]][0].first==v[2][1])
    {
        ans1.push_back(v1[ans1[0]][0].first);
        ans1.push_back(v1[ans1[0]][0].second);
        vis[v1[ans1[0]][0].first]=1;
        vis[v1[ans1[0]][0].second]=1;
        x=ans1[2];
        for(ll i=0;i<v1[ans1[1]].size();i++)
            {
                mark[v1[ans1[1]][i].first]--;
                mark[v1[ans1[1]][i].second]--;
            }
            for(ll i=0;i<v1[ans1[2]].size();i++)
            {
                mark[v1[ans1[2]][i].first]--;
                mark[v1[ans1[2]][i].second]--;
            }
    }
    else
    {
        ans1.push_back(v1[ans1[0]][0].second);
        ans1.push_back(v1[ans1[0]][0].first);
        vis[v1[ans1[0]][0].first]=1;
        vis[v1[ans1[0]][0].second]=1;
        x=ans1[2];
        for(ll i=0;i<v1[ans1[1]].size();i++)
            {
                mark[v1[ans1[1]][i].first]--;
                mark[v1[ans1[1]][i].second]--;
            }
            for(ll i=0;i<v1[ans1[2]].size();i++)
            {
                mark[v1[ans1[2]][i].first]--;
                mark[v1[ans1[2]][i].second]--;
            }
    }
    for(ll i=0;i<n-5;i++)
    {
        ll xx=x;
        ll tt=0;
        for(ll j=0;j<v1[xx].size();j++)
        {
            //cout<<j<<endl;
            if(mark[v1[xx][j].first]<=0 && !vis[v1[xx][j].first])
            {
                ans1.push_back(v1[xx][j].first);
                vis[v1[xx][j].first]=1;
                x=v1[xx][j].first;
                tt=1;
            }
            else if(mark[v1[xx][j].second]<=0 && !vis[v1[xx][j].second])
            {
                ans1.push_back(v1[xx][j].second);
                vis[v1[xx][j].second]=1;
                x=v1[xx][j].second;
                tt=1;
            }
        }
        if(!tt)
        {
            for(ll j=1;j<=n;j++)
            {
                if(!vis[j] && j!=v[2][0] && j!=v[2][1] && j!=v[1][0] && j!=v[1][1])
                {
                    ans1.push_back(j);
                    break;
                }
            }
        }
        for(ll j=0;j<v1[x].size();j++)
        {
            mark[v1[x][j].first]--;
            mark[v1[x][j].second]--;
        }
    }
    if(vis[v[2][0]]==0)
        ans1.push_back(v[2][0]);
    else
        ans1.push_back(v[2][1]);
    if(vis[v[1][0]]==0)
        ans1.push_back(v[1][0]);
    else
        ans1.push_back(v[1][1]);
    for(ll i=0;i<ans1.size()-1;i++)
        cout<<ans1[i]<<" ";
        cout<<ans1[ans1.size()-1];
}


