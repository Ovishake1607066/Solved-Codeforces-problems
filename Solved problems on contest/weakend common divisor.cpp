#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long a[100009],prime[100000];
int main()
{
    long long t,n,e;
    for(long long i=3;i*i<=100000;i+=2)
    {
        if(a[i]==0)
        {
            for(long long j=i*i;j<=100000;j=j+(i*2))
            {
                a[j]=1;
            }
        }
    }
    prime[0]=2;
    for(long long i=3,j=1;i<=100000;i+=2)
    {
        if(a[i]==0)
        {
            prime[j]=i;
            j++;
            e=j;
        }
    }
    ll b,c,d,f,g=0,h=0,x,y;
    for(ll i=0;i<100000;i++)
        a[i]=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>c>>d;
        if(i==0)
        {x=c;
        y=d;}
        else
        {
            if(c==x ||d==x)
                g++;
            if(d==y || c==y)
                h++;
        }
        for(ll j=0;j<e;j++)
        {
            if(c%prime[j]==0 || d%prime[j]==0)
               a[prime[j]]++;
            if(c/prime[j]<2 && d/prime[j]<2)
                break;
        }
    }
    if(g==n-1)
    {
        cout<<x<<endl;
        return 0;
    }
    if(h==n-1)
    {
        cout<<y<<endl;
        return 0;
    }
    for(ll i=2;i<prime[e-1];i++)
    {
        //cout<<i<<" "<<a[i]<<endl;
        if(a[i]>=n)
        {
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

}
