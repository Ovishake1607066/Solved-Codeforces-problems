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
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],b,c=0,d=0;
    string s;
    for(ll i=0; i<n; i++)
        cin>>a[i];
    cin>>s;
    if(n==1)
    {
        cout<<a[0]<<endl;
        return 0;
    }
    ll e=1,r,t;
    vector<ll>v;
    for(ll i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
        {
            if(e>n)
                e--;
            v.push_back(e);
            e=1;
        }
        else
            e++;
    }
    if(s[n-1]!=s[n-2])
        v.push_back(1);
    else
    {
        v.push_back(e);
    }
    ll j=0;
    for(ll i=0; i<v.size(); i++)
    {
        priority_queue<ll>q;
        r=v[i];
        //cout<<r<<endl;
        if(r<=k)
        {
            for(ll l=0; l<r; l++)
                c=c+a[l+j];
            j+=r;
        }
        else
        {
            for(ll l=0; l<r; l++)
            {
                q.push(a[l+j]);
            }
            for(ll h=1; h<=k; h++)
            {
                c+=q.top();
                q.pop();
            }
            j+=r;
        }
        //cout<<c<<endl;
        q = priority_queue <ll>();
    }
    cout<<c<<endl;
}

