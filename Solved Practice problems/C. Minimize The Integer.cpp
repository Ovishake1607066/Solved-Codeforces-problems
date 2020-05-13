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
        string s,s1="",s2="",c="";
        ll a=0,b=0,d=0,c1=0,c2=0;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(((ll)s[i])%2==0)
                {
                    s2+=s[i];
                    c2++;
                }
            else
                {
                    s1+=s[i];
                    c1++;
                }
        }
        while(1)
        {
            if(b==c2)
            {
                for(ll i=a;i<s1.size();i++)
                    {
                        c+=s1[i];
                        a++;
                    }
            }
            else if(a==c1)
            {
                for(ll i=b;i<s2.size();i++)
                    {
                        c+=s2[i];
                        b++;
                    }
            }
            else if((ll)s1[a]>(ll)s2[b])
            {
                c+=s2[b];
                b++;
            }
            else
            {
                c+=s1[a];
                a++;
            }
            if(a+b>=s.size())
                break;
            //cout<<s1[a]<<" "<<s2[b]<<endl;
        }
        for(ll i=0;i<c.size();i++)
            cout<<c[i];
        cout<<endl;
    }
}

