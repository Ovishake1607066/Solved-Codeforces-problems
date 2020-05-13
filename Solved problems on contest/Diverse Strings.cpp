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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.size()>26)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=0;i<s.size();i++)
        {
            mark[(ll)s[i]]++;
        }
        ll b=0,c=0,d=0;
        for(ll i=97;i<=122;i++)
        {
            //cout<<mark[i]<<endl;
            if(b==1)
            {
                if(mark[i]==1 && d==1)
                {
                    c=1;
                    break;
                }
                if(mark[i]==0)
                {
                    d=1;
                }
            }
            if(mark[i] && b==0)
                b=1;
            if(mark[i]>1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        for(ll i=50;i<160;i++)
            mark[i]=0;
    }
}

