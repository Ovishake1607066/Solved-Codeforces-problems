#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
ll a2[1010];
using namespace std;
int main()
{
    ll n,r;
    cin>>n>>r;
    ll a[n+1],b,c,j=0,d=1000,e=0,f,g,w=0;
    loop
    {
        cin>>b;
        if(b==1)
            a[j++]=i+1;
    }
    if(j)
    {
        d=a[0]-r+1;
        if(d<1)
            d=1;
        f=a[0]+r-1;
        if(f>n)
            f=n;
        for(ll i=d; i<=f; i++)
            a2[i]=1;
        e++;
    }
    else
    {
        cout<<-1<<endl;
        return 0;
    }
    for(ll i=1; i<j; i++)
    {
        c=a[i]-r+1;
        ll y=c;
        if(y<1)
            y=1;
        ll v=a[i]+r-1;
        if(v>n)
            v=n;
        for(ll x=y; x<=v; x++)
        {
            a2[x]=1;
        }
        if(c<d)
        {
            ;
        }
        else
        {
            d=a[i]-r+1;
            g=a[i]+r-1;
            if(d<=f)
                w=1;
            else
            {
                e++;
                if(w)
                {
                    f=a[i-1]+r-1;
                    i--;
                    if(g>=n)
                    {
                        f=n;
                        e++;
                        break;
                    }
                    continue;
                }
                else
                    f=a[i]+r-1;
                if(f>=n)
                {
                    f=n;
                    if(w)
                        e++;
                    break;
                }
                w=0;
            }
            if(g>=n)
            {
                f=n;
                e++;
                break;
            }
        }
    }
    for(ll i=1; i<=n; i++)
    {
        //cout<<a2[i]<<endl;
        if(!a2[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<e<<endl;
}
