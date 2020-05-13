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
ll mark[5010];
int main()
{
    ll h1,m1,h2,m2,h3,m3,c=0;
    char s1,s2;
    cin>>h1>>s1>>m1>>h2>>s2>>m2;
    c+=(m2-m1);
    c+=((h2-h1)*60);
    c/=2;
    //cout<<h1<<endl<<m1<<endl<<h2<<endl<<m2<<endl;
    h3=h1+(c/60);
    m3=m1+(c%60);
    if(m3>=60)
    {
        m3=m3%60;
        h3++;
    }
    if(h3<10)
    {
        if(m3<10)
            cout<<0<<h3<<":0"<<m3<<endl;
        else
            cout<<0<<h3<<":"<<m3<<endl;
    }
    else
    {
        if(m3<10)
            cout<<h3<<":0"<<m3<<endl;
        else
            cout<<h3<<":"<<m3<<endl;
    }
}
