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
vector<char>v1,v2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    string s;
    ll a,b=0,c=0,d;
    cin>>s;
    a=-1;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
        {
            a=i;
            c++;
        }
    }
    if(c==0)
    {
        if((s.size())%2!=0)
        {
            cout<<":("<<endl;
            return 0;
        }
        ll kk=0;
        for(ll i=0,j=((s.size())/2); i<(s.size())/2; i++,j++)
        {
            //cout<<i<<j<<endl;
            if(s[i]!=s[j])
            {
                cout<<":("<<endl;
                return 0;
            }

        }
        for(ll i=0,j=((s.size())/2)-1; i<(s.size())/2; i++,j++)
        {
            cout<<s[i];
        }
        return 0;
    }
    for(ll i=0; i<a; i++)
    {
        if(s[i]!='a')
            v1.push_back(s[i]);
    }
    for(ll i=a+1; i<s.size(); i++)
    {
        v2.push_back(s[i]);
    }
    ll x=v1.size(),y=v2.size();
    ll p=a-c+1;
    ll q=s.size()-a-1;//cout<<p<<y<<a<<endl;
    ll zz=(y-x)/2;
    ll nn=zz;
    if(q>=p && ((q-p)%2==0))
    {
        ll xx=0;
        for(ll i=0,j=0; i<(x+(y-x)/2); i++)
        {
            //cout<<i<<endl;
            if(i<nn && xx==0)
            {
                //cout<<v2[i]<<v2[y-zz]<<endl;
                if(v2[i]!=v2[y-zz])
                {
                    cout<<":("<<endl;
                    return 0;
                }
            }
            else
            {
                //cout<<v2[i]<<v1[j]<<endl;
                if(v2[i]!=v1[j])
                {
                    cout<<":("<<endl;
                    return 0;
                }
                j++;
                xx=1;
            }
            zz--;
        }
        for(ll i=0; i<=(a+(y-x)/2); i++)
            cout<<s[i];
    }
    else
        cout<<":("<<endl;

}
