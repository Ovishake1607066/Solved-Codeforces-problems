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
ll mark[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n,a,b,c=0,d,e,f;
    vector<ll>v1;
    vector<ll>v2;
    cin>>n;
    loop
    {
        cin>>a;
        if(c==1)
            continue;
        if(mark[a]>1)
        {
            c=1;
        }
        else if(mark[a]==1)
            {
                v1.push_back(a);
                mark[a]++;
            }
        else
        {
            v2.push_back(a);
            mark[a]++;
        }
    }
    if(c)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    srt(v1);
    srt(v2);
    reverse(v2.begin(),v2.end());
    cout<<v1.size()<<endl;
    for(ll i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    cout<<v2.size()<<endl;
    for(ll i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    if(v2.size()==0)
        cout<<endl;


}

