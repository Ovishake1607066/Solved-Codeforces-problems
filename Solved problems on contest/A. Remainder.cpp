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
    ll n,x,y,c=0;
    cin>>n>>x>>y;
    string s,s2;
    cin>>s;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(x==0)
        x=n;
    for(ll i=0;i<x;i++)
    {
        if(i+1==(x-y))
            s2+='1';
        else
            s2+='0';
    }
    //cout<<s2<<endl;
    for(ll i=s.size()-1,j=s2.size()-1,k=0;k<x,i>=0,j>=0;i--,j--,k++)
    {
        if(s[i]!=s2[j])
            c++;
    }
    cout<<c<<endl;

}
