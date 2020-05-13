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
ll mark[500010];
deque<ll>d;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    loop
    {
        cin>>mark[i];
    }
    sort(mark,mark+n);
    for(ll i=0; i<n; i++)
    {
        if(i%2==0)
            d.push_back(mark[i]);
        else
            d.push_front(mark[i]);
    }
    deque<ll> :: iterator it=d.begin();
    deque<ll> :: iterator it3=d.begin();
    deque<ll> :: iterator it2=d.end();
    it2--;
    ll x=*it,y=*it2;
    it++;
    ll z=*it+y;
    it2--;
    ll w=*it2+x;
    it2=d.begin();
    it2++;
    it2++;
    it3++;
    ll c=0;
    for(it=d.begin(); it2!=d.end(); it++,it2++,it3++)
    {
        if(*it3<*it+*it2)
        {
            ;
        }
        else
        {
            c=1;
            break;
        }

    }
    if(z>x && w>y && c==0)
    {
        cout<<"YES"<<endl;
        for(it=d.begin(); it!=d.end(); it++)
            cout<<*it<<" ";
        return 0;
    }
    d.clear();
    for(ll i=n-1; i>=0; i--)
    {
        if(i%2==0)
            d.push_back(mark[i]);
        else
            d.push_front(mark[i]);
    }
    it=d.begin();
    it2=d.end();
    it2--;
    x=*it,y=*it2;
    it++;
    z=*it+y;
    it2--;
    w=*it2+x;
    c=0;
    it3=d.begin();
    for(it=d.begin(); it2!=d.end(); it++,it2++,it3++)
    {
        if(*it3>*it+*it2)
        {
            ;
        }
        else
        {
            c=1;
            break;
        }

    }
    //cout<<x<<" "<<y<<endl;
    //cout<<z<<" "<<w<<endl;
    if(z>x && w>y && c==0)
    {
        cout<<"YES"<<endl;
        for(it=d.begin(); it!=d.end(); it++)
            cout<<*it<<" ";
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

