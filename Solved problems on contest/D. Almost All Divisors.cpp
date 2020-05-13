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
#define l 2000000
long long a[10000000],prime[1000000];
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll e;
    for(ll i=3; i*i<=l; i+=2)
        if(a[i]==0)
            for(ll j=i*i; j<=l; j=j+(i*2))
                a[j]=1;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b=0,c=0,d;
        cin>>n;
        ll a2[n];
        loop
        {
            cin>>a2[i];
        }
        sort(a2,a2+n);
        if(n==1)
        {
            if((a[a2[0]]==0 && a2[0]%2!=0) || a2[0]==2)
            {
                cout<<a2[0]*a2[0]<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else
        {
            b=a2[0]*a2[n-1];
            for(ll i=1; i<=n/2; i++)
            {
                if(a2[i]*a2[n-i-1]!=b)
                {
                    cout<<-1<<endl;
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                ll x=0;
                for(ll i=2,j=0; i<=sqrt(b); i++)
                {
                    //cout<<i<<"     "<<b/i<<"  "<<a2[j]<<"    "<<a2[n-j-1]<<endl;
                    if(b%i==0)
                    {
                        if(b/i==i)
                        {
                            x++;
                            if(i==a2[n-j-1])
                                c=0;
                            else
                            {
                                c=1;
                                cout<<-1<<endl;
                                break;
                            }
                        }
                        else
                        {
                            x+=2;
                            if(i!=a2[j])
                            {
                                c=1;
                                cout<<-1<<endl;
                                break;
                            }
                            if(b/i!=a2[n-j-1])
                            {
                                c=1;
                                cout<<-1<<endl;
                                break;
                            }
                        }
                        j++;
                    }
                }
                if(c==0 && x==n)
                    cout<<b<<endl;
                if(x!=n && c==0)
                    cout<<-1<<endl;
            }

        }

    }
}

