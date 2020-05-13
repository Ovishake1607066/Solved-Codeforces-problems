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
bool sortbysec(const pair<pair<ll,ll>,ll> &a,
               const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b=0,e=0,f;
        cin>>n;
        string s;
        cin>>s;
        ll a[11];
        for(ll i=0; i<10; i++)
            a[i]=0;
        for(ll i=0; i<s.size(); i++)
        {
            a[(ll)s[i]-48]++;
        }
        string s1="",s2="",s3="";
        for(ll i=0; i<n; i++)
        {
            ll x=(ll)s[i]-48,c=0,d=0;
            for(ll j=x-1; j>=0; j--)
            {
                if(a[j])
                {
                    c=1;
                    break;
                }
            }

            if(c)
            {
                s1+='2';
            }
            else
            {
                //cout<<e<<endl;
                if(x>=e && i!=0)
                    s1+='2';
                else
                    s1+='1';
            }
            a[x]--;
            e=max(e,x);
        }
        //cout<<s1<<endl;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]=='1')
                s2+=s[i];
            else
                s3+=s[i];
        }
        string t=s2+s3;
        //cout<<t<<endl;
        for(ll i=0; i<n-1; i++)
        {
            if(t[i]>t[i+1])
            {
                b=1;
                break;
            }
        }
        if(b)
        {
            cout<<"-"<<endl;
        }
        else
            cout<<s1<<endl;
    }

}
