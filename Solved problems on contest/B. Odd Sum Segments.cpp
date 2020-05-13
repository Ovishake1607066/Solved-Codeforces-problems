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
vector<ll>v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k,a=0,b=0,c=0,d=0,e=0;
        cin>>n>>k;
        for(ll i=1; i<=n; i++)
        {
            cin>>a;
            if(b<k-1)
            {
                if(a%2!=0)
                {
                    v.push_back(i);
                    b++;
                }
                else
                {
                    ;
                }
            }
            else
            {
                if(a%2==0)
                    c++;
                else
                    d++;
                if(i==n)
                {
                    if(d%2!=0)
                    {
                        v.push_back(n);
                        b++;
                    }
                }
            }
        }
        //cout<<k<<endl;
        if(b==k)
        {
            cout<<"YES"<<endl;
            for(ll i=0;i<k;i++)
                cout<<v[i]<<" ";
                cout<<endl;
        }
        else
            cout<<"NO"<<endl;
        v.clear();
    }
}

