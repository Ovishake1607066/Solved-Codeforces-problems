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
    loop
    {
        string s,s2="";
        cin>>s;
        ll a,b,c=0,d=0;
        sort(s.begin(),s.end());
        a=s.size();
        if(a%2==0)
        {
            a/=2;
            for(ll i=0,j=a; i<a; i++,j++)
            {
                if((ll)s[j]-(ll)s[i]==1)
                {
                    cout<<"No answer"<<endl;
                    d=1;
                    break;
                }
                else
                {
                    s2+=s[j];
                    s2+=s[i];
                }
            }
        }
        else
        {
            a/=2;
            s2+=s[a];
            for(ll i=0,j=a+1; i<a; i++,j++)
            {
                if((ll)s[j]-(ll)s[i]==1)
                {
                    cout<<"No answer"<<endl;
                    d=1;
                    break;
                }
                else
                {
                    s2+=s[j];
                    s2+=s[i];
                }
            }
        }
        if(d==0)
            cout<<s2;
        cout<<endl;
    }
}

