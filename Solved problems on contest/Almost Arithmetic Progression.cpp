#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b=0,c=0,d,e,f,g=0,s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            continue;
        b=b+a[i]-a[i-1];
    }
    if(n<3)
    {
        cout<<0<<endl;
        return 0;
    }
    b=abs(b);
    if(b%(n-1)>=ceil((n-1)/2))
        c=c+1;
    //cout<<b<<c<<endl;
    c=c+(b/(n-1));
    //cout<<c<<endl;
    sort(a,a+n);
    //for(ll i=0;i<n;i++)
        //cout<<a[i]<<endl;
    d=a[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        e=d-a[i];
        f=c-e;
        //cout<<f<<endl;
        if(f>2 ||f<-2)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(f>0)
        {
            if(!g && f>1)
                {
                    a[i+1]=a[i+1]+1;
                    s++;
                    f--;
                }
            if(f)
            {
                a[i]=a[i]-1;
                g=1;
                s++;
                f--;
            }
            else
                g=0;
        }
        else if(f<0)
        {
            if(f<-1 && !g )
                {
                    a[i+1]=a[i+1]-1;
                    s++;
                    f++;
                }
            if(f)
            {
                a[i]=a[i]+1;
                g=1;
                s++;
                f++;
            }
            else
                g=0;
        }
        if(f)
        {
            cout<<-1<<endl;
            return 0;
        }
    //cout<<a[i]<<a[i+1]<<g<<endl;
        d=a[i];
    }
    cout<<s<<endl;
}
