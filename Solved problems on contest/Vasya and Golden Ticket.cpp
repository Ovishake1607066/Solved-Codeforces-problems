#include<bits/stdc++.h>
#define ll long long
#define sf(n) scanf("%lld",&n)
#define pf(n) printf("%lld",n)
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll n,a,b,c,d,sm=0;
    string s;
    cin>>n;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        sm+=((ll)s[i]-48);
    }
    for(ll i=2;i<=n;i++)
    {
        if(sm%i==0)
        {
            a=sm/i;
            c=0;
            d=0;
            for(ll j=0;j<n;j++)
            {
                //cout<<c<<endl;
                c+=((ll)s[j]-48);
                if(c>a)
                {
                    d=1;
                    break;
                }
                if(c==a)
                    c=0;
            }
            if(d==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

}
