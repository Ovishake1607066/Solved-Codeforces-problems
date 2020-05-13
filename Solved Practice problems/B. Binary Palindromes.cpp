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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,c1=0,a=0,b=0,c=0;
        cin>>n;
        b=n;
        while(n--)
        {
            string s;
            cin>>s;
            c1=0;
            if(s.size()%2!=0)
                a++;
            for(ll i=0; i<s.size()/2; i++)
            {
                if(s[i]!=s[s.size()-i-1])
                    c1++;
            }
            if(c1%2!=0)
                c++;
        }
        if(c%2!=0 && a==0)
            cout<<b-1<<endl;
        else
            cout<<b<<endl;
    }
}

