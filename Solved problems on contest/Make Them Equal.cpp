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
    set<ll>s,s1;
    ll n,a,b=0,c=0,d=0;
    cin>>n;
    loop
    {
        cin>>a;
        s.insert(a);
    }
    if(s.size()>3)
    {
        cout<<-1<<endl;
        return 0;
    }
    set<ll> :: iterator it,it2,it3;
    vector<ll>v;
    for(it=s.begin(); it!=s.end(); it++)
    {
        v.push_back(*it);
    }
    srt(v);
    if(v.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    for(ll i=0; i<v.size()-1; i++)
    {
        //cout<<v[i+1]-v[i]<<endl;
        s1.insert(v[i+1]-v[i]);
    }
    it2=s1.begin();
    if(s1.size()>1)
        cout<<-1<<endl;
    else
        {
            if((*it2)%2==0 && v.size()==2)
                cout<<(*(it2))/2<<endl;
            else
                cout<<*it2<<endl;
        }

}

