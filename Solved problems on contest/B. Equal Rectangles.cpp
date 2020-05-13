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
    ll q;
    cin>>q;
    while(q--)
    {
        multiset<ll>s;
        ll n,a,b=0,c=0,d=0,e,x=0;
        cin>>n;
        for(ll i=0; i<4*n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        multiset<ll> :: iterator it1=s.begin(),it2=s.end(),it3=s.begin(),it4=s.end();
        it3++;
        it2--;
        it4--;
        it4--;
        if(*it1==*it3 && *it2==*it4)
            x=(*it1)*(*it2);
        else
        {
            cout<<"NO"<<endl;
            c=1;
        }
        //cout<<x<<endl;
        it1++;
        it2--;
        it3++;
        it4--;
        it1++;
        it2--;
        it3++;
        it4--;
        for(ll i=0; i<n-1; i++,it1++,it3++,it2--,it4--,it1++,it3++,it2--,it4--)
        {
            if(*it1==*it3 && *it2==*it4)
            {
                ll xx=(*it1)*(*it2);
                if(xx!=x)
                {
                    if(c==0)
                        cout<<"NO"<<endl;
                    c=1;
                    break;
                }
            }
            else
            {
                if(c==0)
                    cout<<"NO"<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"YES"<<endl;
    }
}

