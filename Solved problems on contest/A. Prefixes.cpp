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
    cin>>n;
    string s;
    cin>>s;
    ll c1=0,c2=0,a,b,d=0;
    string s1,s2;
    for(ll i=0;i<n;i++)
    {
        if((s[i]=='a' && s[i+1]=='b')||(s[i]=='b' && s[i+1]=='a'))
            ;
        else
        {
            if(s[i]=='a')
                s[i+1]='b';
            else
                s[i+1]='a';
            c1++;
        }
        i++;
    }
    cout<<c1<<endl;
    cout<<s<<endl;

}
