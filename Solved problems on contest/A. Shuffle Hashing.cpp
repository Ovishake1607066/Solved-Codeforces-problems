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
    ll t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s>>s2;
        ll n=s.size();
        ll m=s2.size();
        ll a,b,c=0,d=0;
        if(n>m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(s.begin(),s.end());
            for(ll i=0;i<=m-n;i++)
            {
                string k="";
                for(ll j=i,z=0;z<n && j<m;j++,z++)
                {
                    k+=s2[j];
                }
                sort(k.begin(),k.end());
                if(k==s)
                {
                    c=1;
                    break;
                }
            }
            if(c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
