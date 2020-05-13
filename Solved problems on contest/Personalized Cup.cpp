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
char an[6][21];
int main()
{
    string s;
    cin>>s;
    ll a,b,c,d,e;
    a=s.size();
    for(ll i=1;i<=5;i++)
    {
        if(a%i==0)
            b=a/i;
        else
            b=a/i+1;
        if(b<=20)
        {
            c=i;
            break;
        }
    }
    d=(b*c)-a;
    e=d/c;
    ll f=(d%c);
    //cout<<e<<f<<endl;
    for(ll i=0;i<c;i++)
    {
        for(ll j=0;j<e;j++)
            an[i][j]='*';
    }
    for(ll i=0,j=0;j<f;i++,j++)
    {
        an[i][e]='*';
    }
    for(ll i=0,k=0;i<c;i++)
    {
        for(ll j=0;j<b;j++)
        {
            if(an[i][j]!='*')
            {
                an[i][j]=s[k];
                k++;
            }
        }
    }
    cout<<c<<" "<<b<<endl;
        for(ll i=0,k=0;i<c;i++)
    {
        for(ll j=0;j<b;j++)
        {
            cout<<an[i][j];
        }
        cout<<endl;
    }
}

