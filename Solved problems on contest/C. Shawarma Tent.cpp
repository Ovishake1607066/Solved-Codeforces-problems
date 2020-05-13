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
    ll n;
    ll a,b;
    cin>>n>>a>>b;
    ll cx=0,cy=0,dx=0,dy=0,e=0,p,q;;
    for(ll i=0; i<n; i++)
    {
        cin>>p>>q;
        if(p>a)
            cx++;
        if(p<a)
            cy++;
        if(q>b)
            dx++;
        if(q<b)
            dy++;
        /*if(p==a)
        {
            cx++;
            cy++;
        }
        if(q==b)
        {
            dx++;
            dy++;
        }*/
    }
    //cout<<cx<<" "<<cy<<"  "<<dx<<"  "<<dy<<endl;
    if(cx>cy)
    {
        if(dx>dy && dx>cx)
        {
            cout<<dx<<endl;
            cout<<a<<" "<<b+1<<endl;
        }
        else if(dy>dx && dy>cx)
        {
            cout<<dy<<endl;
            cout<<a<<" "<<b-1<<endl;
        }
        else
        {
            cout<<cx<<endl;
            cout<<a+1<<" "<<b<<endl;
        }
    }
    else if(cx<cy)
    {
        if(dx>dy && dx>cy)
        {
            cout<<dx<<endl;
            cout<<a<<" "<<b+1<<endl;
        }
        else if(dy>dx && dy>cy)
        {
            cout<<dy<<endl;
            cout<<a<<" "<<b-1<<endl;
        }
        else
        {
            cout<<cy<<endl;
            cout<<a-1<<" "<<b<<endl;
        }
    }
    else
    {
        if(cx==0)
        {
            if(dx>dy)
            {
                cout<<max(1LL,dx)<<endl;
                cout<<a<<" "<<b+1<<endl;
            }
            else
            {
                cout<<max(1LL,dy)<<endl;
                cout<<a<<" "<<b-1<<endl;
            }
        }
        else if(dx>dy && dx>cy)
        {
            cout<<dx<<endl;
            cout<<a<<" "<<b+1<<endl;
        }
        else if(dy>dx && dy>cy)
        {
            cout<<dy<<endl;
            cout<<a<<" "<<b-1<<endl;
        }
        else
        {
            cout<<max(1LL,cy)<<endl;
            cout<<a-1<<" "<<b<<endl;
        }
    }

}

